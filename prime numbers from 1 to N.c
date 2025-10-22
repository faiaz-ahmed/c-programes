#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    int i;
    if (n < 2)
        return 0;

    else if (n == 2 )
        return 1;

    else if (n % 2 == 0)

        return 0;


    for (i = 3; i <= sqrt(n); i= i + 2)
    {
        if (n % i == 0)
            return 0;

    }
        return 1;

}

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }
}
