#include<stdio.h>
int main(){
int arr[5]={10,22,30,4,-5};
int min = arr[0];
for(int i = 0; i<5;i++)
{
    if(min>arr[i]){
        min = arr[i];
    }
}
printf("The sum is : %d",min);

    return 0;
}