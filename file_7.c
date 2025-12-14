#include <stdio.h>
struct student
{
    char name[50];
    int id;
    float cg;
};
int main()

{
    FILE *fptr;
    int n = 0;
    struct student s[10];
    fptr = fopen("newfile.txt", "r");
    if (fptr == NULL)
    {
        printf("File was not found\n");
        return 1;
    }

    while(fscanf(fptr, "%s %d %f", s[n].name, &s[n].id, &s[n].cg) == 3)
    {
        n++;
        if (n >= 10)
            break;
    }

    printf("\tStudents record\n");

    for (int i = 0; i < n; i++)
    {
        printf("Name: %s\n",s[i].name );
        printf("ID: %d\n", s[i].id);
        printf("CGPA: %f\n\n", s[i].cg);
    }
}
