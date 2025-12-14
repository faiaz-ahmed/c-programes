#include <stdio.h>

int main()
{
    int grade, id;

    FILE *fptr;
    fptr = fopen("students.txt", "w");

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the number %d's ID and grade: ", i + 1);
        scanf("%d %d", &id, &grade);
        fprintf(fptr, "%d \t %d\n", id, grade);
    }
    fclose(fptr);

    fptr = fopen ("students.txt", "r");
    char student[1000];

    while(fgets(student, 1000, fptr) != NULL)
        {
        printf("%s", student);
    }


}
