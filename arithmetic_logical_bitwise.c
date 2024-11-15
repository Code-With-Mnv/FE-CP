#include <stdio.h>

int main()
{
    // Arithmetic Operators

    float a = 10, b = 30, c = 40, d = 50;

    printf("\nArithmetic operators:\n");

    printf("A = %f, B = %f", a, b);

    printf("\nSum: %.1f\n", a + b);
    printf("Difference: %.1f\n", a - b);
    printf("Product: %.1f\n", a * b);
    printf("Quotient: %.1f\n", a / b);

    // Logical Operators

    printf("\nLogical operators:\n");
    printf("(a > b) && (c > d): %d\n", (a > b) && (c > d));
    printf("(a > b) || (c > d): %d\n", (a > b) || (c > d));
    printf("!(a > b): %d\n", !(a > b));

    // Bitwise Operators

    printf("\nBitwise operators:\n");

    int x = 0, y = 1;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("\nx BITWISE AND y: %d\n", x & y);
    printf("x BITWISE OR y: %d\n", x | y);
    printf("x BITWISE xOR y: %d\n", x ^ y);

    return 0;
}
