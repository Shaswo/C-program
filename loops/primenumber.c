#include<stdio.h>
int main(){
int n;
printf("Enter");
scanf("%d",&n);

int a = 0;

for(int i = 2; i<=(n-1); i=i+1 ){
    if(n%i==0){
        a = 1;
        break;
    }

}

if(n==1){
    printf("1 is neither prime nor composite");
}

else if(a==0){
    printf("The number is prime.");
}
 else{
    printf("The number is composite.");
 }

    return 0;
}