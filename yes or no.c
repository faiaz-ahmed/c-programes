#include <stdio.h>

int main()

{
    FILE *fptr;

    fptr = fopen("newFIle.txt", "w");

    fputs("C is a fun programming language\nAnd, I love using C language", fptr);
    char    copy[1000];
    fgets(copy, 100, fptr);
    printf("%s", copy);
    fclose(fptr);



}
