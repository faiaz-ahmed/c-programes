#include <stdio.h>


int sum3(int x, int y, int z)
{
    int sum = x + y + z;
    return sum;
}


int main()
{
    int a,b,c;
    a = 5;
    b = 4;
    c = 3;
    //int sum = sum3(a, b,c);
    printf("The summation of the three numbers is %d", sum3(a, b, c));
}
