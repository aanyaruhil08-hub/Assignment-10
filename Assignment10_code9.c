/*9. Column with Minimum Sum
Write a C program to find the column having the minimum sum in a matrix using recursion.*/

#include <stdio.h>

int columnSum(int a[][10], int row, int col, int r)
{
    if(row == r)
        return 0;

    return a[row][col] + columnSum(a, row + 1, col, r);
}

void findMinColumn(int a[][10], int col, int r, int c,
                   int *minSum, int *minCol)
{
    int sum;

    if(col == c)
        return;

    sum = columnSum(a, 0, col, r);

    if(col == 0 || sum < *minSum)
    {
        *minSum = sum;
        *minCol = col;
    }

    findMinColumn(a, col + 1, r, c, minSum, minCol);
}

int main()
{
    int a[10][10];
    int r, c, i, j;
    int minSum, minCol;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    findMinColumn(a, 0, r, c, &minSum, &minCol);

    printf("Column with minimum sum = %d\n", minCol);
    printf("Minimum sum = %d\n", minSum);

    return 0;
}