#include <stdio.h>

int main()

{
    int total_marks[]={79,65,85,83,96,79,74,87,85,84,79,70,65,85,83,69,91,91,79};
    int marks, i, count;
    for (marks=60; marks<=100; marks++)
    {
        count=0;
        for(i=0; i<19; i++)
        {
        if(total_marks[i]==marks){
            count++;
            }
        }
        printf("%d marks= %d person\n", marks, count);
    }
}
