#include <stdio.h>
#include <math.h>

int main()
{
    double time, height, g;
    g = 9.81;

    printf("Enter the value of height in meters = ");
    scanf("%lf", &height);

    time = sqrt((2 * height) / g);
    printf("The falling time of the object is %.2f seconds.\n", time);

    return 0;
}
