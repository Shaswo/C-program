#include<stdio.h>
int main(){
int a =255;
int* x =&a;  
int** y=&x; //pointer x ko location save garxa 

printf("%p is location of container a \n",x);
printf("%p is location of pointer *x  \n",y);
printf("%d is integer value of a  \n",a);
printf("%d is the value of data stored in the file location stored by pointer *x  \n",  *x);
printf("%d is the value of data stored in the file location stored by pointer *y",  **y);




    return 0;
}