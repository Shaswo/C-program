#include<stdio.h>
int main(){
    float x;
    printf("Enter your fractional number");
     scanf("%f",&x);  // take x = 7.1
     int y = x;    //y is intiger and x is float. so only integer value will be y. ie y = 7
    printf("\nYour intiger part of number is: %d",y);
    float z = x - y;  // 7.1-7=0.1 which is fractional part .
    printf("\nFractional part of %f is %f",x,z);
    return 0;
}