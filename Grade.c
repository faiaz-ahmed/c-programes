#include <stdio.h>

int main()

{
    int n;

    printf("Marks obtained: ");
    scanf("%d", &n);

    if (n >= 80)
    {
        printf("Grade: A+");
    }
    else if (n >= 75)
    {
        printf("Grade: A");
    }
    else if (n >= 70)
    {
        printf("Grade: A-");
    }
    else if (n >= 65)
    {
        printf("Grade: B+");
    }
    else if (n >= 60)
    {
        printf("Grade: B");
    }
    else
    {
        printf("Grade: D");
    }
}
