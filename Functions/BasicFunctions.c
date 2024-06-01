#include<stdio.h>

void england(){
    printf("England");
    return;


}

void australia(){
    printf("Aus\n");
    england();
    return;
}

void india(){  //called by main
    printf("India\n");
    australia();
}


int main(){

india(); //calling india 
return 0;
 
}

