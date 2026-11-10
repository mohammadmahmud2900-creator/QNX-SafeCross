#include <stdio.h>
#include <unistd.h>

int pedestrian_detected() {
    return 1;
}

void emergency_brake() {
    printf("PEDESTRIAN DETECTED!\n");
    printf("Emergency Brake Activated...\n");
    usleep(8000);
    printf("Car STOPPED in 8ms. Pedestrian SAFE.\n");
}

void normal_drive() {
    printf("Road clear. Driving normally...\n");
}

int main() {
    printf("=== QNX SafeCross Started ===\n");
    printf("Monitoring road...\n\n");
    if (pedestrian_detected()) {
        emergency_brake();
    } else {
        normal_drive();
    }
    return 0;
}
