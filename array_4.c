//reverse array

#include <stdio.h>

int main()

{
    int arr[]={10, 29, 49, 54, 32};

    int temp, i, j;

    for (i = 0; i < 5/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

}
