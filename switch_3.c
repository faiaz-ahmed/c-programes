#include <stdio.h>
#include <math.h>

void menu();

int main()
{
    int n;
    menu();
    return 0;
}


void menu ()

{
    int n, i;
    printf("1. square\n2. Cube\n3.Square Root\n");
    printf("Choose the number from the above: ");
    scanf("%d", &i);

    printf("Enter the number: ");
    scanf("%d", &n);

    switch (i)
    {
    case 1:
        printf("%lf", pow(n, 2));
        break;

    case 2:
        printf("%lf", pow(n, 3));
        break;

    case 3:
        printf("%d", sqrt(n));
        break;

    default:
        printf("ARE YOU DUMB?");
    }
}
