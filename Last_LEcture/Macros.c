#include<stdio.h>
#define PI 3.14159265359
#define area(r) (PI*r*r)
int main(){
// {
//     float r = 2.0;
//     double area = PI * r * r ;

    printf("%.10f",area(10)); //Sent radius to macro
    
    return 0;
} 