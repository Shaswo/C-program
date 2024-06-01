#include <stdio.h>
int main()
{
    int a;
    printf("Enter the 1st side");
    scanf("%d", &a);
    int b;
    printf("Enter the 2nd side ");
    scanf("%d", &b);
    int c;
    printf("Enter the 3rd side");
    scanf("%d", &c);

    if((a+b)>c && (a+c)>b && (b+c)>a){
        printf("The sides 1st=%d , 2nd=%d and 3rd=%d can be the sides of triangle.",a,b,c);
    }
    else{
        printf("It cant be");
    }

    return 0;
}