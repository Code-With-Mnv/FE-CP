#include <stdio.h>

int combination(int n, int r)
{
    int n_fact = 1, r_fact = 1, n_r_fact = 1, combination = 0;
    for (int i = 1; i <= n; i++)
    {
        n_fact *= i;
    }

    for (int i = 1; i <= r; i++)
    {
        r_fact *= i;
    }

    for (int i = 1; i <= n - r; i++)
    {
        n_r_fact *= i;
    }

    combination = (n_fact) / (n_r_fact * n_fact);

    return combination;
}

int main()
{
    int n, r;

    printf("Enter the values for n and r:");
    scanf("%d %d", &n, &r);

    int result = combination(n, r);
    printf("The combination of %d taken %d at a time is: %d\n", n, r, result);

    return 0;
}
