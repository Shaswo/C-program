#include<stdio.h>
int main()
{
int n ;
printf("Enter");
scanf("%d",&n);

for(int i = 1; i<=n ; i++)
{
    int a = 1;
   for(int j = 1 ; j<=i ; j++){    //For pattern , just change j<=n to j<=i;
   int d = a+64;
    char ch = (char)d;
    printf("%c", ch);
     a = a+1;
   }  
   printf("\n");

}
    return 0;
}