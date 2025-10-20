#include <stdio.h>

int main()

{
    int ft_marks[5] = {80,70,78,89,87} , st_marks[5] = {86,89,76,89,57}, final_marks[5]={76, 78, 45, 78 ,90};
    double total_marks[5];
    int i;
    for(i=0; i<5; i++)
    {
        total_marks[i]= ft_marks[i] * 0.25+ st_marks[i] * 0.25+ final_marks[i] * 0.5;
    }
    for (i=0; i<5; i++)
    {
        printf("Roll no: %d's total marks= %0.2lf\n", i+1, total_marks[i]);
    }
}
