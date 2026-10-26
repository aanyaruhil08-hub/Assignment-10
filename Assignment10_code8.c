/*8. Matrix Multiplication
Write a C program to multiply two compatible matrices using recursive functions.*/

#include <stdio.h>

void multiply(int a[][10], int b[][10], int c[][10],
              int i, int j, int k, int r1, int c1, int c2)
{
    if(i == r1)
        return;

    if(j == c2)
    {
        multiply(a, b, c, i + 1, 0, 0, r1, c1, c2);
        return;
    }

    if(k == c1)
    {
        multiply(a, b, c, i, j + 1, 0, r1, c1, c2);
        return;
    }

    c[i][j] = c[i][j] + a[i][k] * b[k][j];

    multiply(a, b, c, i, j, k + 1, r1, c1, c2);
}

int main()
{
    int a[10][10], b[10][10], c[10][10] = {0};
    int r1, c1, r2, c2;
    int i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter first matrix:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Enter second matrix:\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    }

    multiply(a, b, c, 0, 0, 0, r1, c1, c2);

    printf("Product matrix:\n");

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
            printf("%d ", c[i][j]);

        printf("\n");
    }

    return 0;
}