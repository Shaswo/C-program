#include<stdio.h>
int main(){
int n;
printf("The Number is :");
scanf("%d",&n);
if(n==0){
    printf("Neither even nor odd");
}
else if(n%2==0){
    printf("Even");
}
else{
    printf("Odd");
}
    return 0;
}