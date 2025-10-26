#include <stdio.h>

int main()
{
    int mark, grade;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    grade = mark / 10;

    switch (grade)
    {
    case 10:
    case 9:

        printf("Grade: A");
        break;

    case 8:

        printf("Grade: B");
        break;

    case 7:

        printf("Grade: C");
        break;

    default:

        printf("Grade: F");
    }
    return 0;
}
