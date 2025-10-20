#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

    char binary [65];
    int len, power, i, decimal;
    printf(" Enter the binary number: ");
    scanf("%s", binary);
    len = strlen(binary);
    power = len - 1;
    decimal = 0;
    for (i = 0; i<len; i++)
    {
        decimal += (binary[i]-'0') * pow(2,power);
        power--;
    }
    printf(" The decimal number is %d\n", decimal);
}
