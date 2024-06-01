#include<stdio.h>
#include<String.h>
int main(){
// //strlen
// char *str = "Shaswot";
// int x = strlen(str);
// printf("The size is %d.\n",x);

// // deep copy strcpy
// char s1[8] = "Shaswot";
// char s2[8];
// strcpy(s2, s1);

// printf("%s\n", s2);
// // Checking if its deep or shallow copy
// s1[0] = 'A';
// printf("%s\n", s2);
// printf("%s\n", s1);
// // Since s1 ko value later change huda ni s2 ko value change vayena , so it is deep copy

//StrCat

char s1[50]="Shaswot"; // Concat garera output aauda pugni space hunu parxa so used s1[50];
char s2[7]="Paudel";
strcat(s1, s2);
printf("%s",s1);




return 0;
} 