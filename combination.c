#include <stdio.h>

long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    long factorial = 1;

    for (int i = 2; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

long nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n, r;
    printf("Enter the values of n and r: ");
    scanf("%d %d", &n, &r);

    printf("%d", nCr(n, r));
    return 0;
}
