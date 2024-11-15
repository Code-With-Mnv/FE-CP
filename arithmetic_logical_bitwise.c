#include <stdio.h>

int main()
{
    // Arithmetic Operators
    float a = 10, b = 30;

    printf("A = %f, B = %f", a, b);

    printf("\nSum: %.1f\n", a + b);
    printf("Difference: %.1f\n", a - b);
    printf("Product: %.1f\n", a * b);
    printf("Quotient: %.1f\n", a / b);

    // Logical Operators
    int x = 10, y = 20;

    printf("\nx = %d, y = %d", x, y);

    printf("\nx AND y: %d\n", x && y);
    printf("x OR y: %d\n", x || y);
    printf("NOT x: %d\n", !x);

    // Bitwise Operators
    printf("\nx BITWISE AND y: %d\n", x & y);
    printf("x BITWISE OR y: %d\n", x | y);
    printf("x BITWISE XOR y: %d\n", x ^ y);

    return 0;
}