#include<stdio.h>
 int main(){   
   int n;
   printf("Enter the number");
   scanf("%d",&n);
     if(n%5==0 || n%3==0){
        if(n%15!=0){
            printf("The number is divisible by 3 and 5 but not by 15.");
        }
        else{
            printf("The number is divisible by 15.");
        }
       
     }
        
    else{
            printf("The number is not divisible by 3 and 5");
    }
     
    return 0;
 }