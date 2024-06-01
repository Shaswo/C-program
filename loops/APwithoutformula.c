#include<stdio.h> // ap of 2,,4,6,8.....n  put n = 50
int main()
{
    int n ;
    printf("Enter");
    scanf("%d",&n);

    int a = 2;

    for(int i = 1; i<=n; i=i+1){
        printf("%d ", a);
        a=a+2;
    }

    return 0;

}