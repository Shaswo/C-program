#include <stdio.h>
#include <string.h>
#include<stdbool.h>
int main()
{
typedef struct date{
    int year;
    int month ;
    int day ;
}date;
date a,b,c;
a.year = 2003;
a.month = 4;
a.day = 9;

b.year = 2003;
a.month = 4;
a.day = 9;

bool flag = false ;
if(a.day==b.day ) flag = true;
 if(a.month==b.month ) flag = true;
 if(a.year==b.year ) flag = true;


if(flag == true) printf("The dates are same .");
else{printf("The dates are not equal.");}



//Lets make c equal to a 

c = a;
flag = false ;
if(c.day==b.day ) flag = true;
 if(c.month==b.month ) flag = true;
 if(c.year==b.year ) flag = true;
if(flag == true) printf("\n The dates are same .");
else{printf("\n The dates are not equal.");}


    return 0;
}  