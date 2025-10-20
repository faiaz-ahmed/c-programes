#include <stdio.h>
int main()
{
    char country[10]="bangladesh";
    int i,A,a,z,length;
    printf("%s\n", country);
    length=10;
    for(i=0; i<length; i++){
        if (country[i]>='a' && country[i]<='z'){
            country[i]= 'A' + country[i]- 'a';
        }

    }
    printf("%s", country);
}
