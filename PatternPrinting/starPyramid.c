#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    int nst = 1;
    for(int i = 1; i<=n;i++)
{   for(int k = 1; k<=n-i;k++)
    {
        printf(" ");
    }
    for(int j = 1; j<=nst;j++){  // as i ko value ma stars ko number dependent cha
    printf("*");                // replace j<=(2*i-1) for doing without nst i.e number of stars
    }
    nst = nst+2;

printf("\n");
}


    return 0;

}