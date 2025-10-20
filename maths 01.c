// take the number (out of 100) of a student of an exam as input (i.e,  99, 80, 71, etc.). write a C program to find his grade
#include <stdio.h>
int main()

{
    int english, grade;
    printf("obtained marks= ");
    scanf("%d", &english);
    if(english>=80)
    {
        printf("GPA=5.00");
    }
    else if (english>=75)
    {
        printf("GPA=4.00");
    }
    else if (english>=70)
    {
        printf("GPA=3.50");
    }
    else if (english>=60)
    {
        printf("GPA=3.00");
    }
    else if (english>=50)
    {
        printf ("GPA=2.00");
    }
    else {
        printf("FAIL");
    }

}
