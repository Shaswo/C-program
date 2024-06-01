#include<stdio.h>
int main(){

int x , y;
printf("Enter X coordinate");
scanf("%d",&x);
printf("Enter Y coordinate");
scanf("%d",&y);

if(x==0 && y==0){
    printf("It lies on origin");
}
else if(x==0){
    printf("It lies on Y-axix");
}
else if(y==0){
    printf("It lies on x-axis");

}
else{
    printf("The point doesnot lie on x-axis , y-axis and origin.");
}

    return 0;
}