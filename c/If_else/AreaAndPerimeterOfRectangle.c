 #include<stdio.h>
 int main(){   
   int l,b;
   printf("Enter the length");
   scanf("%d",&l);
   printf("Enter the breadth");
   scanf("%d",&b);

   int A = l * b;
   int P = 2*(l + b);
    
    if(A==P){
        printf("equal");
    }
     
    if (A>P){
        printf("Area is greater");
    }

    if (A < P){
        printf("Perimeter is greater");
    }




    return 0;
 }