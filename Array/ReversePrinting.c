#include<stdio.h>
int main(){
int arr[5];
for(int i=0;i<5;i++){
    int a = i+1;
    printf("Enter the element number %d : ",a);
    scanf("%d",&arr[i]);
}
for(int j=4;j>=0;j--){


printf("The array is %d \n",arr[j]);
} 


    return 0;
}