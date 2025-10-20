#include <stdio.h>

int main()

{
    int ara[]={1,4,6,8,9,10,13,15,19,20,30,40,50,60,70};
    int low_indx=0, high_indx=14, mid_indx;
    int num=60;
    while(low_indx<=high_indx){
        mid_indx=(high_indx + low_indx)/2;
        if (num== ara[mid_indx]){
            break;
        }
        else if (num < ara[mid_indx]){
            high_indx = mid_indx - 1;
        }
        else {
             low_indx = mid_indx + 1;
        }
    }
    if ( low_indx > high_indx )
        printf("the number is not inside the array");
    else
    {
        printf(" %d is in the array", ara[mid_indx]);
    }
}
