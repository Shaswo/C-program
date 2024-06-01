#include<stdio.h>
#include<stdlib.h>
int main(){
int n ;
printf("Enter N:");
scanf("%d",&n);
// int arr[n]; //with array 
// for(int i = 0; i<n ; i++){
//     scanf("%d",&arr[i]);
// }
//without using array 
int *ptr = (int*)malloc(n*sizeof(int));//Array lea jastai dibba banyo
int *p = ptr; //points at 1st element of above created array jastai dibba

for(int i = 1; i<=n; i++){
scanf("%d", &*ptr);
ptr++;
}
int *t =p;
for(int i = 1; i<=n; i++){
printf("%d ", *p);
p++;
}
free(p);
p = NULL;
printf("%p",p);
    return 0;
} 