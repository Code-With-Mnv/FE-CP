#include <stdio.h>

void display(int result_matrix[10][10], int r1, int c2)
{
    printf("\nResultant Matrix!\n");

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", result_matrix[i][j]);
        }
        printf("\n");
    }
}

void multiply(int matrix1[10][10], int matrix2[10][10], int r1, int c1, int r2, int c2)
{
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible!");
    }

    int result_matrix[10][10] = {0};

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < r1; k++)
            {
                result_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Multiplied!");

    display(result_matrix, r1, c2);
}

int main()
{
    int c1, r1, c2, r2;

    printf("Enter the values for rows and columns of matrix 1: ");
    scanf("%d %d", &r1, &c1);

    printf("\nEnter the values for rows and columns of matrix 2: ");
    scanf("%d %d", &r2, &c2);

    printf("\nGenerating Matrices!");

    int matrix1[10][10];
    int matrix2[10][10];

    printf("\nEnter the values for Matrix 1");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Matrix1[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter the values for Matrix 2");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Matrix2[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    multiply(matrix1, matrix2, r1, c1, r2, c2);

    return 0;
}
