#include <stdio.h>

typedef struct{
char name[20];
int id;
float cg;
}student;

int main()
{
    int n, i;
    FILE *fptr;
    student s[10];
    fptr = fopen("newfile.txt", "w");


    if (fptr == NULL){
        printf("File was not found");
    return 1;
    }

    printf("How many students? > ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the name of the student: ");
        scanf("%s", s[i].name);
        printf("Enter the id of the student: ");
        scanf("%d", &s[i].id);
        printf("Enter cgpa: ");
        scanf("%f", &s[i].cg);

        fprintf(fptr, "%s\t%d\t%f", s[i].name, s[i].id, s[i].cg);
    }
    fclose(fptr);

    fptr = fopen("newfile.txt", "r");
    if (fptr == NULL)
    {
        printf("File not found");
        return 1;
    }

    printf("\tStudent records\n");
    student temp;
    while (fscanf(fptr, "%s %d %f", temp.name, &temp.id, &temp.cg) == 3){
        printf("Name: %s\n", temp.name);
        printf("ID: %d\n", temp.id);
        printf("CGPA: %f\n", temp.cg);
    }


    fclose(fptr);
}

