#include <stdio.h>

void decimal_to_binary(int n)
{
    if (n == 0)
        return;
    decimal_to_binary(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int x;


    printf("Enter a decimal number: ");
    scanf("%d", &x);

    if (x == 0)
        printf("0");
    else
        decimal_to_binary(x);
}
