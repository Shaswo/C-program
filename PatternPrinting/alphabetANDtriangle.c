#include<stdio.h>
int main()
{
int n ;
printf("Enter");
scanf("%d",&n);

for(int i = 1; i<=n ; i++)
{
   if(i%2!=0){
    for(int j = 1; j<=i; j++){
        printf("%d",j);
    }
    }
    else{
        int a=1;
        for(int k = 1; k<=i;k++){
            int d = a + 64;
            char ch = (char)d;
            printf("%c",ch);
            a = a+1;
        }
    }
  printf("\n");

   }  
  


    return 0;
}