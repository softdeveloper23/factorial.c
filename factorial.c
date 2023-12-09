#include <stdio.h>
#include "cs50.h"

int factorial(int number);

int main(void)
{
    // Prompt user for an integer
    int n = get_int("Type a number: ");
    printf("%i\n", factorial(n));
}

int factorial(int number)
{
    // Return the factorial of the number
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}