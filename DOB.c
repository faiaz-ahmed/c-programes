#include <stdio.h>

int main()

{
    int a, b;

    printf("Enter the birth year of two persons: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("Second person is older");
    }
    else if ( a < b)
    {
        printf("First person is older");
    }
    else
    {
        printf("They both are same age");
    }
}
