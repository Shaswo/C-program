#include<stdio.h>
void tower(int n, char s ,char h , char d ){
    // s = source, h = helper , d = destination
    //s,h,d must be is order 
    if(n==0)return;
    tower(n-1,s,d,h);// 2 ota banaudai // yeha source , destination ra helper xa 
                // order dhyan dinye
    printf("%c to %c\n", s, d);

    tower(n-1,h,s,d);
    return;



}



int main(){
int n;
printf("Enter the number of disk:");
scanf("%d",&n);

tower(n,'A','B','C');


}