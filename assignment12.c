#include <stdio.h>
#include <math.h>

int main()
{
    int i, amount, note_count, ara[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    printf("Enter the amount: ");
    scanf("%d", &amount);

    for (i = 0; i < 7; i++)
    {
        note_count = amount / ara[i];
        amount = amount % ara[i];
        printf("%d note(s) of of %d\n", note_count, ara[i]);
    }
    return 0;
}
