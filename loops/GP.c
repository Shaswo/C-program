#include<stdio.h>  // GP of 1 2 4 8 .....nth term 
int main(){
    int n ;
    printf("Enter a number:");
    scanf("%d", &n);

    int a = 1;

    for(int i =1; i<=n ; i=i+1){
     
        printf("%d ",a);
              a = a * 2;
        
    }




return 0;
}
