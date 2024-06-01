#include<stdio.h> //without using functions
int factorial(int x){
    int fact = 1;

for(int i =2; i<=x; i++)
{
    fact = fact * i;
}
return fact;
}




int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int r;
    printf("Enter r:");
    scanf("%d",&r);
    int nfact=factorial(n);
    int rfact=factorial(r); //r!
    int nrfact = factorial(n-r); // n-r ! 
    // we can directly do without creating these containers nfact,rfact,nrfact
    // write this instead
    //int ncr = factorial(n)/(factorial(r)*factorial(n-r));
   
  //int ncr = factorial(n)/(factorial(r)*factorial(n-r));
   
   int ncr = nfact/(rfact*nrfact);
   printf("%d",ncr);
   
   
    return 0;
    

}