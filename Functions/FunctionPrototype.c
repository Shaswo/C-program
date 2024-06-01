#include<stdio.h>

void england(){
    printf("England"); //step 6
    return; //step 7


}



void india(){  //called by main
    
    printf("India\n"); //step 2
    void australia();
    australia(); //calling aus //step 3
   
   
    return; //step 9

}
void australia(){
    printf("Aus\n");//step 4
    england(); //step 5
    return;  //step 8
}

int main(){

india(); //calling india //step 1


return 0; //step 10
 
}

