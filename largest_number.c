#include <stdio.h>

int main()

{
    double num1, num2;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    if (num1 > num2)
    {
        printf("Largest number: %0.2f\n", num1);
    }

    else if (num2 > num1)
    {
        printf("Largest number: %0.2f\n", num2);
    }

    else
    {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
