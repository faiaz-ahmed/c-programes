#include <stdio.h>
int main()
{
    int a,remainder;
    printf("enter a number ");
    scanf("%d", &a);
    remainder= a%2;
    printf("%d",remainder);
    if (remainder==0){
        printf ("the number is even");
    }
    else if (remainder==1){
        printf("the number is odd");
    }
}
