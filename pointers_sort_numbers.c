#include <stdio.h>

void order(int *smallp, int *longp);

int main()
{
    int num1, num2, num3;

    printf("Enter three numbers to sort: \n8");
    scanf("%d %d %d", &num1, &num2, &num3);

    order(&num1, &num2);
    order (&num1, &num3);
    order (&num2, &num3);

    printf("After sorting the numbers: %d %d %d", num1, num2, num3);

    return 0;
}

void order(int *smallp, int *longp)
{
    int temp;

    if (*smallp > *longp)
    {
        temp = *smallp;
        *smallp = *longp;
        *longp = temp;
    }
}
