#include<stdio.h>
#include<limits.h>
int main(){
//int arr[7]={1,4,2,8,19,5,100}; // this wont when the elements are in minus

int arr[7]={-1,-4,-2,-8,-19,-5,-100};

// yo garnu ko thau ma muni ko gara int max = -1; //array ko sab element vanda sano 

int max = INT_MIN;

for(int i = 0; i<7;i++)
{
if(max < arr[i]){
    max = arr[i];
}
}
printf("The max is : %d",max);

    return 0;
} 