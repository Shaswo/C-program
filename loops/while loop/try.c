#include<stdio.h>
int main(){
    int n ;
    printf("Enter a number:");
    scanf("%d", &n);
    int a=0;

for(int i = 1; i<=n; i++){
    a = a-i;
    
}
printf("%d",a);







return 0;
}