#include<stdio.h>
int main()
{
int x = 12;
int arr[8]={1,2,3,4,5,6,7,8};
int count = 0;
for(int i = 0; i<8; i++)
{
    for(int j = (i+1); j<8; j++)
    {
        if((arr[i]+arr[j])==x)
        {
            count = count +1;
            printf("(%d,%d)\n",arr[i],arr[j]);
        }
    }


}
printf("%d", count);


    return 0;
} 