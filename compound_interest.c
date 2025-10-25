#include <stdio.h>
#include <math.h>

int main()

{
    double p, r, t, amount;

    printf("Enter the amount: ");
    scanf("%lf", &p);

    printf("Rate of interest: ");
    scanf("%lf", &r);

    printf("Time: ");
    scanf("%lf", &t);

    amount = p * pow(1 + r / 100, t);

    printf("compund sum = %0.2f", amount);

    return 0;
}
