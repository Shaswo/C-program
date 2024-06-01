#include <stdio.h>
void zigzag(int n){
    if(n==0)return;
    printf(" %d ",n);
    zigzag(n-1); //call
    printf(" %d ",n);
    zigzag(n-1);
    printf("%d",n);
    return;


}

int main()
{
    int n;
    printf("Enter n");
    scanf("%d", &n);
    
    zigzag(n); //void type
    
    return 0;
}
