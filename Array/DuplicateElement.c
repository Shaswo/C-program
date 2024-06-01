#include<stdio.h>
int main(){
int arr[7]={1,2,3,4,2,3,4};
for(int i = 0; i<7 ; i++)
{
    for(int j = i+1; j<7 ; j++) // compare garda same index sanga compare garinna , so j ko valu i ko vandnda One agadi hunu parxa
    {
        if(arr[i]==arr[j])
        {
            printf("%d  is duplicate element\n",arr[i]);
            break;
        }
    }
}






    return 0;
}  