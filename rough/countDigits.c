#include<stdio.h>
int main()
{
    int n = 12345;
    int sum =0;
    int ld ;
    while(n != 0){
        ld = n%10;
        sum = sum +ld;
        n = n/10;
        
    }
    printf("%d is sum",sum);
    return 0;
} 