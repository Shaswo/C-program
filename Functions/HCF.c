#include<stdio.h>
int min(int e , int f){
    if(e<f)
    return e;
    else return(f);
}


int gcd(int x , int y){
    int hcf;
    
    for(int i = 1; i<=min(x,y); i++)
    {
    if(x%i==0 && y%i==0)
    {
    hcf=i;
    
    }

    }
    return hcf;
}



int main(){
int a;
printf("Enter a" );
scanf("%d",&a);
int b;
printf("Enter b");
scanf("%d",&b);


int hcf= gcd(a,b); //greatest commin divisor

printf("The HCf/GCD of %d and %d is: %d", a , b , hcf);
    return 0;
} 