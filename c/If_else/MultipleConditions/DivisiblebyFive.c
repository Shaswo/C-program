#include<stdio.h>
 int main(){   
   int n;
   printf("Enter the number");
   scanf("%d",&n);
     if(n%5==0 && n%3==0){
        printf("The number is divisible by 3 and 5.");
    }
    else{
        printf("Not divisible by 3 and 5.");
    }
    return 0;
 }