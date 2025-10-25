#include <stdio.h>

void swap_numbers(int *a, int *b);

int main()

{
    int a, b;

    printf("input 1st number: ");
    scanf("%d", &a);

    printf("input 2nd number: ");
    scanf("%d", &b);

    swap_numbers(&a, &b);

    printf("After swapping the numbers: %d, %d", a, b);

    return 0;
}


void swap_numbers(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    return;
}
