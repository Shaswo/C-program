#include<stdio.h>
int main(){
int a =5;
int* x =&a;     // adress store  garna tarika 
//*x = 7;

printf("%p \n",&a);
printf("%p\n",x);   // %p bata adress print huncha  &a lea pointers ko adress output dincha
printf("%p \n",&x); 
printf("%d \n",*x);
printf("%d", a);

    return 0;
}