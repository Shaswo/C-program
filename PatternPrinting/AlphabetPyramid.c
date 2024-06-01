#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    int noa = 64;
for(int i = 1; i<=n;i=i+1)
{
    for(int k = 1; k<=n-i;k++)
    {
        printf(" ");
    }
    
    
    
    for(int j = 65; j<=2*i+63; j++)
    {

      char ch = (char)j; 
       
        printf("%c",j);
    }
    printf("\n");
}

    return 0;

}