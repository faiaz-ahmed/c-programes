#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("newfile.txt", "w");

    fprintf(fptr, "hellow this is the first line\n");
    fprintf(fptr, "hellow this is the second line\n");

    fclose(fptr);

    fptr = fopen("newfile.txt", "r");
    char read[1000];

    while (fgets(read, 100, fptr) != NULL)
    {
        printf("%s", read);
    }
    fclose(fptr);
}
