#include<stdio.h>
int main(){
float radius;
printf("Enter radius");
scanf("%f",&radius);
float a = 3.1415*radius*radius;
printf("Area of circle: %f",a);
return 0;
}