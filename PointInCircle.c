#include <stdio.h>
#include <math.h>

int main()

{
    int x, y, r, i, j, k;

    printf("Enter the coordinates of the center, radius and coordinates of the point: ");
    scanf("%d %d %d %d %d", &x, &y, &r, &i, &j);

    k = pow(i - x, 2) + pow(j - y, 2);

    if (k < pow(r, 2))
    {
        printf("Inside the circle");
    }
    else if (k == pow (r, 2))
    {
        printf("On the circle");
    }
    else
    {
        printf("Outside the circle");
    }
}
