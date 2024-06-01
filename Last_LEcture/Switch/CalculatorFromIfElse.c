#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   char ch; // + - / * 
   scanf("%c",&ch);
   int b;
   scanf("%d",&b);

   if(ch == '+')
   printf("%d", a+b);
   if(ch == '-')
   printf("%d",a-b);
   if(ch == '*')
   printf("%d", a*b);
   if(ch == '/')
   printf("%f",(float)a/b); //if both integer divided then gives only integer . so made one char by doing typecasting

    return 0;
} 