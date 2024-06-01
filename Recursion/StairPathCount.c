#include<stdio.h>
int stair(int n){
if (n==1 || n==2)return n; // last ma n = 2 vaye 2 ways only possible ra 1 vaye 1 way only possible
int totalWays;
totalWays = stair(n-2)+stair(n-1); 
return totalWays;
}


int main(){
int n;
printf("Enter n");
scanf("%d",&n);

int ways = stair(n);
printf("%d is number of ways to climb %d staircase from ground ",ways,n);
    return 0;
}