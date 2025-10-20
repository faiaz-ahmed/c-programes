#include <stdio.h>
#include <math.h>

int main()

{
    int u,t,a,s;
    printf("Starting pace= ");
    scanf("%d",&u);
    printf("Time(S)= ");
    scanf("%d", &t);
    printf("Accelaration= ");
    scanf("%d", &a);
    s= u * 2 * t + 0.5 * a * 4 * t * t;
    printf("Total distance=%d ", s);
}
