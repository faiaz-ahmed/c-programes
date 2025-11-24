#include <stdio.h>

int main()

{
    int i, j, arr[5];

    printf("Enter the values of the array: ");

    for (i = 0; i < 5; i++)
        {
            scanf("%d", &arr[i]);
        }

    printf("\n");
    printf("Array = ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}
