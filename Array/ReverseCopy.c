#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[5];

    for(int i = 0; i<5 ; i++)
    {
        
            brr[i]= arr[4-i];
        printf("The %d indexed reverse element of array is %d.\n",i,brr[i]);

    }
    for(int i = 0; i<5 ; i++)
    {
        printf("%d ",brr[i]);
    }

    
    return 0;
} 