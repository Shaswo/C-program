#include <stdio.h>
#include <string.h>
#include <errno.h>
extern int error;
int main()
{
    FILE *ptr = fopen("sp.txt", "r");
    if (ptr == NULL)
    {
        fprintf(stderr, "Errno after: %d \n", errno);
        fprintf(stderr, "Error msg:%s \n", strerror(errno));
    }
    else
    {
        char str[100];
        while (fgets(str, 100, ptr) != NULL)
        {
            printf("%s", str);
        }
    }
        return 0;
 } 