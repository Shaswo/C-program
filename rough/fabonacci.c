#include<stdio.h>
int main()
{
    //1 1 2 3 5 8 13....
    int n;
    puts("Enter n");
    scanf("%d",&n);

    int a =1;
    int b =1;
    int sum = 1;
    printf(" 1 1 ");
    for(int i = 1; i<=n-2 ; i++){
        sum = a+b;
        a = b;
        b = sum;
        printf("%d ",sum);
    }
    

   return 0;
}  
