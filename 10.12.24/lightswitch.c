#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LIGHTCOUNT 8

int switchlight(int lights, int lightNum) {
    lights = lights ^ (1 << (lightNum - 1));
    printf("Light %d is now switched\n", lightNum);
    return lights;
}

void printstate(int lights) {
    printf("Turned on lights are:\n");
    for (int i = 1; i <= LIGHTCOUNT; i++) {
        if ((lights & (1 << (i - 1))) != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: ./lightmanager <command> [light number]\n");
        return 1;
    }

    int lights = 0;

    if (strcmp(argv[1], "Switch light") == 0) {
        if (argc < 3) {
            printf("Please provide a light number to switch.\n");
            return 1;
        }
        int lightNum = atoi(argv[2]);
        if (lightNum < 1 || lightNum > LIGHTCOUNT) {
            printf("Invalid light number. Please use a number between 1 and %d.\n", LIGHTCOUNT);
            return 1;
        }
        lights = switchlight(lights, lightNum);
    } 
    else if (strcmp(argv[1], "Print state") == 0) {
        printstate(lights);
    } 
    else {
        printf("Unknown command. Use 'Switch light' or 'Print state'.\n");
    }

    return 0;
}
