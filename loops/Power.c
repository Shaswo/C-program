#include<stdio.h>

int main() {  
    int a,b;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter a number:");
    scanf("%d", &b);

    int power= 1;

    for(int i = 1; i<=b;i=i+1){
        power = power * a;
    }
    printf("The value is %d",power);

    

    return 0;
}