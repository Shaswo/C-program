#include<stdio.h>
int main(){
int n;
printf("The number is :");
scanf("%d",&n);

int a = 0;

/*for(int i = 2; i<=(n-1); i++){

    if(n%i==0){
        a = 1 ;
    }
}
 
if(n==1){
    printf("One is neither prime nor composite");
}
else if(a==0){
    printf("The number is Prime");
}
else{
    printf("The number is Composite");*/


    int i = 2;
    while(i<=(n-1)){
        if(n%i==0){
        a = 1;
        }

        i=i+1;
    }
if(n==1)
{
    printf("Neither Prime Nor Composite");
}

else if(a==0){
    printf("PRIME");
}
else{
    printf("Compo");
}

    return 0;
}