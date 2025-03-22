#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number1 = 1;
    int numbers_entered1 = 0;
    int number2 = 1;
    int numbers_entered2 = 0;

    // First loop using break
    while (numbers_entered1 < 10) {
        printf("Loop 1 - Please enter a number: ");
        scanf("%d", &number1);

        if (number1 <= 0) {
            break;
        }

        numbers_entered1++;
    }
    
    printf("Good job! You've broken out of loop 1!\n\n");

    // Second loop using condition
    while (number2 > 0 && numbers_entered2 < 10) {
        printf("Loop 2 - Please enter a number: ");
        scanf("%d", &number2);
        numbers_entered2++;
    }

    printf("Good job! You've completed loop 2!\n");
    return 0;
}