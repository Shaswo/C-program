#include <stdio.h>
int main()
{
    double x1 , x2 , x3 , y1 , y2 , y3 ;
printf("Enter x1-");
scanf("%lf",&x1);
printf("Enter x2-");
scanf("%lf",&x2);
printf("Enter x3-");
scanf("%lf",&x3);
printf("Enter y1-");
scanf("%lf",&y1);
printf("Enter y2-");
scanf("%lf",&y2);
printf("Enter y3-");
scanf("%lf",&y3);

double m1 , m2;
m1 = (y2-y1)/(x2-x1);
m2 = (y3-y2)/(x3-x2);

printf("m1 is %lf and m2 is %lf", m1 , m2);
printf("\n");

if(m1=m2){
    printf("All three points fall in straight line");
}
else{
    printf("They don't fall in straight line");
}



    return 0;
}