#include <stdio.h>

void PrintArray(int arr[], int size);

int main()

{
    int arr[]= {1, 2, 4, 5, 7, 9}, size;

    size = sizeof(arr) / sizeof(arr[0]);

    PrintArray(arr, size);
}

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    int sum = 0;

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("Sum = %d", sum);
}
