#include<stdio.h>
int main()
{
int arr[4]= {2,5,11,4};
int target = 9;
for(int i = 0 ; i<4 ; i++)
{
    for(int j = i+1; j<4 ; j++)
    {
        if(arr[i]+arr[j]==9)
        {
            printf("[%d,%d]",arr[i],arr[j]);
            break;
        }
    }
}


    return 0;
} 