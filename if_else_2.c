#include <stdio.h>

int vote_age(int n);

int main()

{
    int n;

    printf("Enter the age of the person: ");
    scanf("%d", &n);

    if (vote_age(n))
        printf("ELIGIBLE.");
    else
        printf("NOT ELIGIBLE.");
}

int vote_age(int n)

{
    if (n >= 18)
        return 1;
    else
        return 0;
}
