#include <stdio.h>
#include <math.h>

int main()
{
    double EMI, p, R, r, n;

    printf("Enter the value of loan amount: ");
    scanf("%lf", &p);

    printf("Enter the value of annual interest rate: ");
    scanf("%lf", &R);

    printf("Enter the loan tenure in months: ");
    scanf("%lf", &n);

    r = R / (12 * 100);
    EMI = (p * r * pow(1 + r, n) / (pow(1 + r, n) - 1));
    printf("Monthly EMI = %0.2lf taka\n", EMI);

    return 0;
}
