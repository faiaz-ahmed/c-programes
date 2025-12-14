N#include <stdio.h>

int main()

{
    int  arr3[3][3], i, j, k;

int    arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9} , arr2[3][3] = {2, 5, 6, 4, 5, 2, 4, 6, 3};


    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arr3[i][j] = 0;
            for (k = 0; k < 3 ; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr3[i][j]);
        }

        printf("\n");
    }
}
