
#include <stdio.h>
#include <math.h>

// Function prototypes
int factorial(int n);
int isArmstrong(int n);
int isPerfectSquare(int n);
int isPrime(int n);
int largestOfThree(int a, int b, int c);
int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
    int choice, num1, num2, num3, result;
    char option;
menu:
    printf("\nSelect an operation:\n");
    printf("1. Factorial\n");
    printf("2. Check Armstrong number\n");
    printf("3. Check Perfect Square\n");
    printf("4. Check Prime number\n");
    printf("5. Largest of three numbers\n");
    printf("6. LCM\n");
    printf("7. GCD\n");
    printf("Enter your choice (1-7): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter a number to find its factorial: ");
        scanf("%d", &num1);
        result = factorial(num1);
        printf("Factorial of %d is %d\n", num1, result);
        break;

    case 2:
        printf("Enter a number to check if it's an Armstrong number: ");
        scanf("%d", &num1);
        result = isArmstrong(num1);
        if (result)
            printf("%d is an Armstrong number.\n", num1);
        else
            printf("%d is not an Armstrong number.\n", num1);
        break;

    case 3:
        printf("Enter a number to check if it's a Perfect Square: ");
        scanf("%d", &num1);
        result = isPerfectSquare(num1);
        if (result)
            printf("%d is a Perfect Square.\n", num1);
        else
            printf("%d is not a Perfect Square.\n", num1);
        break;

    case 4:
        printf("Enter a number to check if it's Prime: ");
        scanf("%d", &num1);
        result = isPrime(num1);
        if (result)
            printf("%d is a Prime number.\n", num1);
        else
            printf("%d is not a Prime number.\n", num1);
        break;

    case 5:
        printf("Enter three numbers to find the largest: ");
        scanf("%d %d %d", &num1, &num2, &num3);
        result = largestOfThree(num1, num2, num3);
        printf("The largest of %d, %d, and %d is %d\n", num1, num2, num3, result);
        break;

    case 6:
        printf("Enter two numbers to find the LCM: ");
        scanf("%d %d", &num1, &num2);
        result = lcm(num1, num2);
        printf("The LCM of %d and %d is %d\n", num1, num2, result);
        break;

    case 7:
        printf("Enter two numbers to find the GCD: ");
        scanf("%d %d", &num1, &num2);
        result = gcd(num1, num2);
        printf("The GCD of %d and %d is %d\n", num1, num2, result);
        break;

    default:
        printf("Invalid choice!\n");
        goto menu;
    }

    printf("\nDo you want to perform another operation? (y/n): ");
    scanf(" %c", &option);
    if (option == 'y' || option == 'Y')
    {
        goto menu;
    }
    else
    {
        printf("Exiting the program.\n");
    }

    return 0;
}

// Function to find factorial of a number
int factorial(int n)
{
     int fact = 1;

     for (int i = 1; i <= n; i++)
     {
        fact *= i;
     }

     return fact;
}

// Function to check if a number is Armstrong
int isArmstrong(int n)
{
    int sum = 0, temp = n, remainder;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum += pow(remainder, 3);
        temp /= 10;
    }
    return sum == n;
}

// Function to check if a number is a Perfect Square
int isPerfectSquare(int n)
{
    int root = (int)sqrt(n);
    return root * root == n;
}

// Function to check if a number is Prime
int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// Function to find the largest of three numbers
int largestOfThree(int a, int b, int c)
{
    return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
}

// Function to find the GCD of two numbers
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find the LCM of two numbers
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
