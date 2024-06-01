#include <stdio.h> // this is done log
int powerlog(int a, int b)
{
   if(b==0) return 1;
   if(b==1)return a;

  //int recAns= powerlog(a,b/2) * powerlog(a,b/2);
  // or directly do 
  int x;
  x = powerlog(a,b/2);
  
  if(b%2==0){ // for even power
//int recAns= powerlog(a,b/2) * powerlog(a,b/2);
 // or directly do 
  int x;
  x = x*x;
     return x;}
     

     else // for odd power 
    { x = x * x * a;
     return x;}
}

int main()
{
    int a, b;
    printf("Enter a");
    scanf("%d", &a);
    printf("Enter n ");
    scanf("%d", &b);

    int p = powerlog(a, b);

    printf("%d", p);

    return 0;
}