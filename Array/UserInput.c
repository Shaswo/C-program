#include<stdio.h>
int main(){
int n;
printf("The size of array is :");
scanf("%d",&n);
int arr[n];
for(int i = 0; i<=n-1;i++)
{
    scanf("%d ", &arr[i]);
    
}
for(int i = 0; i<=(n-1);i++)
{
    printf("%d\n",arr[i]);
}
    return 0;
}