#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("ab.txt","w");
    char str[]="I am fine";
    fputs(str,fp);
    
    return 0;

} 