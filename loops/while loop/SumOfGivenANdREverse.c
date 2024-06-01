#include<stdio.h>
int main(){
    int n ;
    printf("Enter a number:");
    scanf("%d", &n);

int reverse = 0;
int lastDigit;


while(n!=0)   //or n>0
{
   reverse= reverse*10;
   lastDigit = n%10; 
   reverse =reverse + (lastDigit);
   
    
    n = n/10;
}
 






return 0;
}