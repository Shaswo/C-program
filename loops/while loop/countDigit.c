#include<stdio.h>
int main(){
    int n ;
    printf("Enter a number:");
    scanf("%d", &n);

int count = 0;

while(n!=0)   //or n>0
{
    n = n/10;
    count = count + 1 ; // or write count++

}

printf("The number of digits are %d",count);




return 0;
}