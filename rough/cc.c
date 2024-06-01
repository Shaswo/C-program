#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    printf("Length of the string: %d\n", strlen(str));
    char ptr[50];
    strcpy(ptr,"Hello Friend");
    printf("%s",ptr);
    return 0;
}


