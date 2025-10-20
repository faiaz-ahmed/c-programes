#include <stdio.h>

int main()

{
    int first, last;
    char num[6];
    printf("Enter the number: ");
    scanf("%s", &num);

    first = num[0] - '0';
    last = num[4] - '0';

    printf("Summation of the first and last digit is %d", first + last);
}
