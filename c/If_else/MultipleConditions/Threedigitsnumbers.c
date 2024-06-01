 #include<stdio.h>
 int main(){   
   int n;
   printf("Enter the number");
   scanf("%d",&n);
   if(n>99&&n<1000){
    printf("The number is three digit");
   }
    else{
        printf("The number is not three digit");
    }

   
    return 0;
 }