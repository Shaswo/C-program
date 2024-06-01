#include <stdio.h>
void swap(int* x, int* y){
    int temp; 
    temp = *x;  // *x lea container a ko value store garya xa ie *x=2
    *x=*y;      // *y lea b ko value point garxa , since *x(ie value of a=2) = *y(ie value of b); aba a ko value is 9 not 2.
    *y = temp;  
    return;


}

int main()
{
    int a=2;
    

    int b=9;
   

    swap(&a,&b);      // do this swap(&a,&b) ie siddha adress of a ra b function ma pathako  or 

    /*  
    int* x=&a; // x ra y container banayera a ra b k0 adress store garya
    int* y=&b;
    swap(x,y); //aba x ra y vitra ko adress send gareko swap function ma mathi 
    */
    printf("The value of a is %d \n", a);
    printf("The value of b is %d \n", b);

    return 0;
}