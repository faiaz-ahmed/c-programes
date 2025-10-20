#include <stdio.h>
#include <math.h>

int main()

{
    double pi,r,area;
    pi= 3.1416;
    printf("radius of the circle= ");
    scanf("%lf", &r);
    if(r==0)
    {
        printf("it is a point circle");
    }
    else {
    //area= pi * r * r;
    area = pi * pow(r,2);
    printf("Area of the circle is= %0.3lf", area);
    }
}
