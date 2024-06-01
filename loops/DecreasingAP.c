#include<stdio.h> //100 97 94 91 88......last positive .
int main(){
    int n ;
    printf("Enter a number:");
    scanf("%d", &n);
    
    int a = 100;

   /* for(int i = 1; i<=n; i=i+1){  // for using maths , now we can enter n = 34 by using maths
        a = a - 3;
    }*/
 
 // without using maths. aba n ma j value put garye ni positive samma matra aauxa .

 for(int i = 1; i<=n && a>0 ;i = i+1 ){      // If teo i<=&& use nagarya vaye , j input deye ni full answer aauthiyo 
     printf("%d ",a);
    a = a-3;                                
    }
    /*yeso garnu ko thau ma  
    for(int i = 1; i<=n ; i = i+1)
    {
      if(a>0){
        printf("%d",a);
        a = a-3;
      }  
      Yo garye ni hunxa
    }*/
    
 

return 0;
}