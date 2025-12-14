#include <stdio.h>

int main()
{
    int id;
    FILE *fptr;

    fptr = fopen("newfile2.txt", "w");
    char update[300];

    if (fptr == NULL)
    {
        printf("Error!!!!");
        return 1;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Enter student's id: ");
        scanf("%d", &id);
        fprintf(fptr, "%d\n", id);
    }
    fclose(fptr);

    fptr = fopen("newfile2.txt", "r");

    if (fptr == NULL)
    {
        printf("Error!!!!");
        return 1;
    }

    while (fgets(update, 1000, fptr) != NULL)
    {
        printf("%s", update);
    }

}
