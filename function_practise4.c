#include <stdio.h>

int BirthYear(int n);

int main()
{
    int n, birth;

    printf("Enter your birth year: ");
    scanf("%d", &n);

    birth = BirthYear(n);

    printf("Your age = %d\n", birth);

    return 0;
}


int BirthYear(int n)
{
    return 2025 - n;
}
