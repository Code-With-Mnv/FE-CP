#include <stdio.h>

int factorial(int n)
{
    int fact = 1;

    if (n >= 1)
    {
        fact = n * factorial(n - 1);
    }

    return fact;
}

int main()
{
    int n, result;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);
}