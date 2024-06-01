#include<stdio.h>
void fun(int brr[][2])
{
    printf("%d\n",brr[0][1]);
    brr[2][2]= 5;
    return;
}
int main()
{
    int arr[2][2]={1,2,3,4};
    fun(arr);
    printf("%d",arr[2][2]);
    return 0;
} 