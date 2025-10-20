#include <stdio.h>
int  main()

{
    char letter;
    int age;
    double grade;

    printf("Enter the first letter of your name: ");
    scanf("%c", &letter);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your expected GPA in this course: ");
    scanf("%lf", &grade);

    printf("\tUSER DETAILS\n");
    printf("Your name's first letter: %c\n", letter);
    printf("Your age: %d\n", age);
    printf("Your expected GPA: %.2lf\n", grade);

    return 0;
}
