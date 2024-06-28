#include <stdio.h>

int factorial(int n);

int main()
{
    int n, ans;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        ans = factorial(n);
        printf("The factorial of %d is %d\n", n, ans);
    }

    return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    else
        return n * factorial(n - 1);
}
