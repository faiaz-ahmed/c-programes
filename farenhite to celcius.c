#include <stdio.h>

double fahrenhite_to_celcius(double f)
{
    return (f - 32) * 5 / 9;
}

int main()

{
    double c,f;

    printf("Enter the temperature in farenhite: ");
    scanf("%lf", &f);

    c = fahrenhite_to_celcius(f);
    printf("Temperature in degree celcius %.2lf\n", c);

    return 0;
}
