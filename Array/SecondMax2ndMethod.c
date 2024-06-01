#include<stdio.h>
#include<limits.h>
int main(){
int arr[7]={7,5,3,4,4,5,2};
int max = INT_MIN;
int sMax = INT_MIN;

for(int i = 0; i<7 ; i++)
{
    if(arr[i]>max)
    {
        sMax = max;
        max = arr[i];
    }
 
    else if(arr[i] != max && arr[i]>sMax)
    {
        sMax = arr[i];
    }

}
printf("%d is max and %d is second max",max,sMax);   
 return 0;
} 