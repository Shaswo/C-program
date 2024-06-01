#include<stdio.h>
int main(){
    float principal,time,rate,SI;
    printf("Enter Principal");
    scanf("%f",&principal);
    printf("Enter Time");
    scanf("%f",&time);
   printf("Enter Rate");
   scanf("%f",&rate);
   SI=(principal*rate*time)/100;
   printf("Simple Interest is:%f",SI);
    return 0 ;
}
