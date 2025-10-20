#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, multi;
    printf("Enter first number: ");
    scanf("%lf", &x);

    printf("Enter second number: ");
    scanf("%lf", &y);

    multi = x * y;
    printf("multipicaton of two numbers are= %0.2f", multi);

    return 0;
}
