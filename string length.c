#include <stdio.h>
int string_length(char str[])
{
    int i , length;
    for(i=0; str[i]!=0; i++){
        length++;
    }
}
int main()
{
    int length;
    char country[100];
    while(1==scanf("%s", country)){
        length= string_length(country);
        printf("length is %d", length);

    }
}
