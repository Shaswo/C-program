#include<stdio.h>
 void increasing(int x, int n ){
if(x>n){  // n samma print garni ho , so n bhanda mathi print garna vayena
return ;}
printf("%d \n",x);
increasing(x+1,n);
return ;
}




int main(){
int n;
printf("Enter n");
scanf("%d",&n);
increasing(1,n); //two parameters are sent to function above
    return 0;
}