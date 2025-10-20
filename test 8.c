#include <stdio.h>
int main()
{
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if( ch>='a' && ch<='z') {
        printf("it is small letter");
    }
    else if (ch>='A' && ch<='Z'){
        printf("it is a capital letter");
    }
}
