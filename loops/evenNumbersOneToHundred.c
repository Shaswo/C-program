#include<stdio.h>
int main(){

for(int i = 2; i<=100 ; i=i+2){  //i++ use garda ni hunxa , i = i+1 ko thau ma 
    printf("%d ",i);
}
printf("\n");

// or another way to do it
for(int i =1; i<=100; i=i+1){
    if(i%2==0){
        printf("%d ", i);
    }
}

   return 0; 
}