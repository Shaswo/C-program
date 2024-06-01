#include<stdio.h>
int main(){
int marks[10];
for(int i=0;i<10;i++){
    int a = i+1;
    printf("Enter the marks of students %d : ",a);
    scanf("%d",&marks[i]);
}
for(int j=0;j<10;j++){
if(marks[j]<35){
    printf("The index of failed is %d \n",j);
}

} 


    return 0;
}