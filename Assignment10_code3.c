/* 3. Reverse an Array
Write a C program to reverse the elements of a one-dimensional array using recursion.*/

#include <stdio.h>

void rev(int a[], int l, int r)
{
    int temp;

    if (l >= r)
        return;

    temp = a[l];
    a[l] = a[r];
    a[r] = temp;

    rev(a, l + 1, r - 1);
}

int main()
{
    int a[100], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    rev(a, 0, n - 1);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}