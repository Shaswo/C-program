#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns");
    scanf("%d",&m);
    
    for(int i = 1; i<=n;i++){ //outerloop = no. of lines
        for(int i = 1;i<=m;i++){// inner loop = no of columns or star  
            printf("*");
            
        }
        printf("\n");
    }


    return 0;

}