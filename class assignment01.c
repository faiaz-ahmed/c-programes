#include <stdio.h>
#include <math.h>

int main()
{
    int x , y, z, years, months, days;
    printf("Enter the number of days: ");
    scanf("%d", &x);

    years = x / 365;
    printf("Years = %d\n", years);

    y = x % 365;
    months = y / 30;
    printf("Months = %d\n", months);

    z = y % 30;
    days = z;
    printf("Days = %d", z);

    return 0;
}
