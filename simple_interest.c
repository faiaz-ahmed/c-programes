#include <stdio.h>

int main()
{
    int p, r, n, i;

    printf("Enter the amount: ");
    scanf("%d", &p);

    printf("rate of interest: ");
    scanf("%d", &r);

    printf("Years: ");
    scanf("%d", &n);

    i = (p * r * n) / 100;

    printf("Simple interest rate = %d", i);

    return 0;

}
