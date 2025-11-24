#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 4, 6, 9}, arr1[5], i, j;

    for (i = 0, j = 4; i < 5; i++, j--)
    {
            arr1[j] = arr[i];
    }

    printf("After reversing the array: ");
    for (j = 0; j < 5; j++)
    {
            printf("%d ", arr1[j]);
    }
}
