#include<Stdio.h>
#include<stdlib.h>
int main(){
int *ptr = (int*)malloc(10*sizeof(int));
printf("%d \n",*ptr);
char *str = (char*)calloc(10,sizeof(char));
printf("%c \n",*str);
int a = sizeof(int);
printf("%d",a);
    return 0;
} 