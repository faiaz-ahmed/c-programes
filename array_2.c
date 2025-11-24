#include <stdio.h>

void FindMax(int arr[], int n);

int main()

{
    int n, arr[] = {2, 5, 7, 90, 86, -2};

    n = sizeof(arr) / sizeof(arr[0]);

    FindMax(arr, n);

    return 0;
}


void FindMax(int arr[], int n)
{
    int i, max;

    max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum = %d", max);
}
