#include <stdio.h>
#include <math.h>
#define ENTER '\n'

int enterOption(int min, int max) {
    int option;
    int countOfChar;
    do {
        printf("Enter an option:");
        scanf("%d", &option);
        countOfChar = 0;
        while (getchar() != ENTER) {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("You have not typed a whole number. Try again.\n");
        } else if (option < min || option > max) {
            printf("Choose an option from %d to %d. Try again.\n", min, max);
        }
    } while (countOfChar != 0 || option < min || option > max);
    return option;
}