#include <stdio.h>

int main()

{
    double celcius, farenhite;
    printf("enter the temperature in celcius= ");
    scanf("%lf", &celcius);
    farenhite= (celcius * 1.8) + 32;
    printf("temperature in farenhite= %lf", farenhite);

}
