/*7. Symmetric Matrix
Write a C program to check whether a square matrix is symmetric using recursion.*/

#include <stdio.h>

int checkSymmetric(int a[][10], int i, int j, int n)
{
    if(i == n)
        return 1;

    if(j == n)
        return checkSymmetric(a, i + 1, 0, n);

    if(a[i][j] != a[j][i])
        return 0;

    return checkSymmetric(a, i, j + 1, n);
}

int main()
{
    int a[10][10];
    int n, i, j;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if(checkSymmetric(a, 0, 0, n))
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}