#include <stdio.h>

void check_num(int n);

int main()

{
    int n;

    check_num(n);

}

void check_num(int n)
{
    printf("Enter a number to check even or odd: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is an even number.\n", n);
    else
        printf("%d is an odd number.\n", n);
}
