#include<stdio.h>

int add(int x, int y){
    return(x+y);
}



int main(){
    int a,b;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);

    int sum = add(a,b);  // calls mathi ko int add function
    printf("The sum is:%d",sum);
}