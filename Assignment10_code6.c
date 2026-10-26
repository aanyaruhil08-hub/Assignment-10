/*6. Occurrences of the Maximum Element
Write a C program to find the maximum element in an array and count the number of times it occurs using recursion.
*/

#include <stdio.h>

void findMax(int a[], int i, int n, int *max, int *count)
{
    if(i == n)
        return;

    if(a[i] > *max)
    {
        *max = a[i];
        *count = 1;
    }
    else if(a[i] == *max)
    {
        (*count)++;
    }

    findMax(a, i + 1, n, max, count);
}

int main()
{
    int a[100], n, i;
    int max, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];

    findMax(a, 0, n, &max, &count);

    printf("Maximum element = %d\n", max);
    printf("Number of occurrences = %d\n", count);

    return 0;
}