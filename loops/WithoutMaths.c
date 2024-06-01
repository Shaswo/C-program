#include<stdio.h>
int main(){
    int n ;
    printf("Enter a number:");
    scanf("%d", &n);
//with formula 
for(int i = 4; i<=1+(3*n) ; i=i+3){  
    printf("%d ",i);  
}
// without formula
int m;
printf("Enter number for without formula");
scanf("%d",&m);
int a = 4; // 4 bata suru so
for(int i=1; i<=m ; i=i+1){
    printf("%d ", a);
    a = a+3 ; // 3 is commondifference
}


   return 0; 
}
