/* Factorial of a Positive Integer
Write a C program using a recursive function to find the factorial of a positive integer. */

#include <stdio.h>

long long factorial(int n)

printf("enter integer");
scanf("%d". &n);

{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;

    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not defined for negative numbers");
    else
        printf("%lld", factorial(n));

    return 0;
}