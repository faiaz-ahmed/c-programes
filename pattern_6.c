#include <stdio.h>
#include <math.h>

int primeNum(int n);

int main()
{
    int n;

    printf("Enter a number to check prime: ");
    scanf("%d", &n);


    if (primeNum(n) == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}



int primeNum(int n)
{
    int i;

    if (n < 2)
        return 0;

    else if (n == 2)
        return 1;

    else if (n % 2 == 0)
        return 0;

    for (i = 3; i <= sqrt(n); i = i + 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
