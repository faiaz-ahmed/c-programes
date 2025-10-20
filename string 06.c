#include <stdio.h>

int main()

{
    char ara[100];
    if ( NULL != gets(ara)){
        printf("%s", ara);
    }
}
