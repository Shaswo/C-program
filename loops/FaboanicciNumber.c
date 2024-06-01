 #include<stdio.h>
int main(){  
    int n ;
    printf("Enter a number:");
    scanf("%d", &n);
int a =1;
int b = 1;
int sum= 1; // for the purpose of giving correct output when n=1 or 2

for(int i = 1;i<=(n-2);i=i+1 ){
    sum=a+b;
    a=b;
    b=sum;
}
printf("The %dth fabonacci is %d",n,sum);
    



return 0;
}
 