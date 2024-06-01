#include<stdio.h>
int factorial(int n ){

if (n==1 || n==0)
return 1;
int recAns=n*factorial(n-1);
return recAns;
}




int main(){
int n;
printf("Enter n");
scanf("%d",&n);
int fact;
fact = factorial(n);
printf("Factorial is %d",fact);
    return 0;
}