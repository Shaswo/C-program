

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "world!";
    
    printf("Before concatenation:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    
    strcat(str1, str2);
    
    printf("\nAfter concatenation:\n");
    printf("str1: %s\n", str1);
    
    return 0;
}
