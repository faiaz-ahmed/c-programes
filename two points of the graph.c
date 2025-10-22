#include <stdio.h>
#include <math.h>

struct Point
{
    int x;
    int y;
};

int main()
{
    struct Point a, b;
    double distance, slope;

    printf("Input the fist coordinates: ");
    scanf("%d %d", &a.x, &a.y);

    printf("Input the second coordinates: ");
    scanf("%d %d", &b.x, &b.y);


    distance = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    slope = (double) (b.y - a.y) / (double)(b.x - a.x);

    printf("Distance = %.2lf\n", distance);
    printf("slope = %.4lf\n", slope);

    return 0;
}
