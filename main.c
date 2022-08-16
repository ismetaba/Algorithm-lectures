#include <stdio.h>

int getANumber();

int main() {
    int input = getANumber();

    // Complete the code as described below:
    // Write a code that prints all the prime numbers from 3 to given number(input). Hint use loops ;)

    return 0;
}

/**
 * Asks an integer from user.
 * @return Entered number.
 */
int getANumber() {
    printf("Please enter a number: ");
    int input;
    scanf("%d", &input);
    printf("You entered: %d \n", input);

    return input;
}
