#include <stdio.h>
#include <math.h>
#define ENTER '\n'
#include "vystup.h"

float enterRadius() {
    float r;
    int countOfChar;
    do {
        printf("Enter a radius:");
        scanf("%f", &r);
        countOfChar = 0;
        while (getchar() != ENTER) {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("You have not typed a real number. Try again.\n");
        } else if (r <= 0) {
            printf("The number has to be positive. Try again.\n");
        }
    } while (countOfChar != 0 || r <= 0);
    return r;
}

int enterOption(int min, int max);

int main() {
    int input;
    float r;
    do {
        printf("MENU\n");
        printf("1 - circumference of a circle\n");
        printf("2 - area of a circle\n");
        printf("3 - volume of a sphere\n");
        printf("4 - surface of a sphere\n");
        printf("5 - terminate program\n");
        input = enterOption(1, 5);
        switch (input) {
            case 1:
                r = enterRadius();
                printf("Circumference of a circle of the radius %.2f is %.2f.\n", r, 2 * 3.14 * r);
                break;
            case 2:
                r = enterRadius();
                printf("Area of a circle of the radius %.2f is %.2f.\n", r, 3.14 * pow(r, 2));
                break;
            case 3:
                r = enterRadius();
                printf("Volume of a sphere of the radius %.2f is %.2f.\n", r, 4.0 / 3.0 * pow(r, 3));
                break;
            case 4:
                r = enterRadius();
                printf("Surface of a sphere of the radius %.2f is %.2f.\n", r, 4 * 3.14 * pow(r, 2));
                break;
        }
    } while(input != 5);



    return 0;
}
