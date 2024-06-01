#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number a");
    scanf("%d", &a);
    int b;
    printf("Enter the number b");
    scanf("%d", &b);
    int c;
    printf("Enter the number c");
    scanf("%d", &c);

   if(a>b){
    if(a>c){
        printf("a is greatest ok");
    }
    else{
        printf("c is greatest ok");
    }
   } 
else{
    if(b>c){
        printf("b is greatest");
    }
    else{
        printf("c is greatest");
    }
}




    return 0;
    
}
