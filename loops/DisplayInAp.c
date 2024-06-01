#include<stdio.h>
int main(){
    int n ;
    printf("Enter a number:");
    scanf("%d", &n);

for(int i = 4; i<=1+(3*n) ; i=i+3){  
    printf("%d ",i);  
}

   return 0; 
}
