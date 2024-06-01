#include<stdio.h>
#include<limits.h>
int main(){
int arr[7]={-1,-4,-2,-8,-19,-5,-100};
int Smax = INT_MIN; // yedi hamle Smax=arr[0]; garyo vanye,yo case ma arr[0] nai max value xa . so second max ko output aauna
int max = INT_MIN; // yesma chai max =  arr[0]; garna milxa
for(int i = 0; i<7; i++)
{
    if(max<arr[i])
    {
        max = arr[i];
    }
}
printf("%d is max value.\n",max);

//int Smax = INT_MIN;
for(int j = 0; j<7; j++)
{
    if( arr[j] != max && Smax<arr[j])
    {
        Smax = arr[j];
    } 
}
printf("%d is second max value.",Smax);



    return 0;
} 