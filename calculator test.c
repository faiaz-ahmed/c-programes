#include <stdio.h>
double sum2(double x, double y)

{
    double sum = ( x + y );

}

double sub2(double x, double y)

{
    double sub = ( x - y );


double multi2(double x, double y)

{
    double  multi = ( x * y );

}

double div2( double x , double y)

{
    double div = ( x / y);

}

double main()
{
    double a,b,sum,sub,multi,div;
    printf("a= ");
    scanf("%lf", &a);
    printf("b= ");
    scanf("%lf", &b);
    printf("addition of the numbers is %.2lf\n", sum2(a,b) );
    printf("subtraction of the numbers is %.2lf\n", sub2(a,b));
    printf("product of the numbers is %.2lf\n", multi2(a,b));
    if (b==0){
        printf("division can't be determined");
    }
    else{
        printf("division of the two product is %.2lf\n", div2(a,b));
    } return
}
