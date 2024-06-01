#include<stdio.h>
int main(){
    int n ;
    printf("Enter a number:");
    scanf("%d", &n);

int sum = 0;
int lastDigit;

while(n!=0)   //or n>0
{
    lastDigit= n%10;
    if(lastDigit%2==0){
    sum = sum + lastDigit;
    }
    
    n = n/10;
}

printf("The number of digits are %d",sum);




return 0;
}