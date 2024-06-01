#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    
    
    for(int i = 1; i<=n;i++){ //outerloop = no. of lines
        for(int j = 1;j<=n;j++){// inner loop = no of columns or star  
            printf("%d ",j);
            
        }
        printf("\n");
    }


    return 0;

}