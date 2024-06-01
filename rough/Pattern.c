#include<stdio.h>
int main()
{
    int n = 4  , m = 6;
for(int i = 1; i<=4 ; i++)
{
    for(int j = 1; j<=m ; j++)
    {
        if(i==1 || i== n || j==1 || j==m){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}

   return 0;
}  
