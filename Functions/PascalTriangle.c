#include<stdio.h> //without using functions
int factorial(int x){
    int fact = 1;

for(int i =2; i<=x; i++)
{
    fact = fact * i;
}
return fact;
}

int combination(int n,int r){
   int ncr = factorial(n)/(factorial(r)*factorial(n-r));
   return ncr;
}
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    //if n = 5 , then 0,1.....to5 ie one more line prints

   for(int i =0; i<=n ; i++) 
    {
       for(int k =0; k<=n-i-1; k++)
       {
        printf(" ");
       }
       
       
        for(int j = 0; j<=i;j++){
        

         int icj = combination(i,j);  // icj vanya nCr format ma lekhya ho .
            printf("%d ",icj);
        }
        printf("\n");
    }

   
    return 0;
    

}

   
   
   
   