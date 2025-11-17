#include <stdio.h>

int main()

{
    int a, b, n, reversed = 0;


    printf("Enter a 4 digit number: ");
    scanf("%d", &a);
    n = a;

    while(a > 0)
    {
        b = a % 10;
        reversed = reversed * 10 + b;
        a = a / 10;
    }
    printf("%d\n", reversed);

    if (n == reversed)
    {
        printf("The original and reversed numbers are equal.\n");
    }
    else
    {
        printf("The original and reversed numbers are not equal.");
    }
}
