#include <stdio.h>

int factorial_number(int n);

int main()

{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = factorial_number(n);

    printf("Factorial of %d is = %d", n, result);

    return 0;
}

int factorial_number(int n)

{
    int result, i;
    result = 1;
    for(i=1; i<=n; i++)
    {
        result *= i;
    }
    return result;
}
