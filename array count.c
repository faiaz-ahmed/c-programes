#include <stdio.h>

int main()

{
    int i,marks, count;
    int total_marks[]={5,7,4,6,7,4,3,2,8,9,7};
    for (marks=0; marks<10; marks++)
    {
        count=0;
        for (i=0; i<11; i++)
        {
            if (total_marks[i]== marks)
            {
                count++;
            }
        }
        printf("%d marks obtained by %d students\n", marks, count);
    }
}
