#include<stdio.h>
int main(){
int n;
printf("Enter the percentage");
scanf("%d",&n);
if(n>90){
    printf("Excellent");
}

else if(n>80){
    printf("Very Good");
}

else if(n>70){
    printf("Good");
}
else if(n>60){
    printf("Can do better");
}
else if(n>50){
    printf("Average");
}
else if(n>40){
    printf("Below average");
}

else{
    printf("Fail");
}



    return 0;
}