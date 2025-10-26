#include <stdio.h>

double calculateSquare(double n);
double calculateCube(double n);

int main()

{
    double n, square, cube;

    printf("Enter a number: ");
    scanf("%lf", &n);

    square = calculateSquare(n);
    cube = calculateCube(n);

    printf("Square of the number is %0.2f\n", square);
    printf("Cube of the number is %0.2f\n", cube);

    return 0;
}

double calculateSquare(double n)
{
    return n * n;
}

double calculateCube(double n)
{
    return n * n * n;
}
