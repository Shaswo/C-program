#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);

int nsp=0;// no of space

int nst=n; // no of stars


for(int i = 1; i<=n;i=i+1)
{   
    for(int j =1;j<=nsp;j++)  //space
{
    printf(" ");
} 

  for(int k =1 ;k<=nst; k++ ){  // for stars*
    printf("*");
  }
  
    nsp++;
    nst--;
  
  printf("\n");
}

    return 0;

}