/*4. Second-Largest Element
Write a C program to find the second-largest distinct element in an array using recursion. Display a suitable message if fewer than two distinct elements exist.*/

#include <stdio.h>
#include <limits.h>

void secondlargest(int a[], int i, int n, int *l, int *sl)
{
    if(i == n)
        return;

    if(a[i] > *l)
    {
        *sl = *l;
        *l = a[i];
    }
    else if(a[i] < *l && a[i] > *sl)
    {
        *sl = a[i];
    }

    secondlargest(a, i + 1, n, l, sl);
}

int main()
{
    int a[100], n, i;
    int largest = INT_MIN;
    int second = INT_MIN;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    secondlargest(a, 0, n, &largest, &second);

    if(second == INT_MIN)
        printf("Fewer than two distinct elements exist.\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}