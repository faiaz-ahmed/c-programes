#include <stdio.h>

void grade_point(int n);

int main()

{
    int n;

    printf("Enter yout obtained marks: ");
    scanf("%d", &n);

    grade_point(n);
}

void grade_point(int n)
{
    if (n >= 80)
        printf("A\n");
    else if (n >= 70)
        printf("A-\n");
    else if (n >= 60)
        printf("B\n");
    else if (n >= 50)
        printf("C\n");
    else if (n >= 40)
        printf("D\n");
    else
        printf("F\n");
}
