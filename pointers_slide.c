#include <stdio.h>

int main()

{
    double d = 13.6;
    double *p;
    p = &d;

    printf("Value of p = %0.3f\n", *p);
    printf("Address of p = %d\n", p);
     printf("Value of p = %d\n", &p);
    printf("Value of d = %0.3f\n", d);
    printf("Address of p = %p", &d);
}
