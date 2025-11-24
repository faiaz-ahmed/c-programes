#include <stdio.h>

int main()

{
    int arr[] = {1, 2, 4, 6, 8, 3, 5};

    for (int i = 0; i < 7/2; i ++)
    {
        int temp = arr[i];
        arr[i] = arr[6 - i];
        arr [6 - i] = temp;
    }

    for(int i = 0; i < 7; i++)
        printf("%d ", arr[i]);
}
