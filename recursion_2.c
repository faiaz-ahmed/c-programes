#include <stdio.h>

int expo(int a, int b)
{
    if (b == 0)
        return 1;
    return a * expo(a, b - 1);
}

int main()
{
    int x, y;

    printf("Enter the numbers: ");
    scanf("%d %d", &x, &y);

int    result = expo(x, y);
    printf("Result = %d", result);
}
