#include<stdio.h>
int main()
{
int n ;
printf("Enter");
scanf("%d",&n);
int a ; // it would be outside loop as it wont again replace a's value.
for(int i = 1; i<=n ; i++)
{
    if(i%2!=0){
        a = 1;
    }
    else{
        a = 0;
    }     // start garayo 

    for(int j =1; j<=i;j++)
    {
        printf("%d ",a);

        if(a==0){
            a=1;
        }
        else{
            a=0;
        }
    }
   
   
   printf("\n");
    }


     
return 0;
}