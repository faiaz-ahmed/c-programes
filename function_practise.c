#include <stdio.h>

int sumTwo(int a, int b);

int main()

{
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = sumTwo(a, b);

    printf("The total is %d", sum);

    return 0;

}



int sumTwo(int a, int b)
{
    return a + b;
}
