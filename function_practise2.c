#include <stdio.h>

int square(int n);

int main()

{
    int n, sqr;

    printf("Enter a number: ");
    scanf("%d", &n);

    sqr = square(n);
    printf("The square of %d is %d\n", n, sqr);
    return 0;
}















int square(int n)
{
    return n * n;
}
