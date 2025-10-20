#include <stdio.h>

struct complex
{
    int real;
    int imag;
};

int main()
{
    struct complex a, b, sum;

    a.real = 3, a.imag = 5;
    b.real = 2, b.imag = 3;

    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;

    printf("sum = %d + %di", sum.real, sum.imag);

    return 0;
}
