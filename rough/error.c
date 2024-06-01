#include<stdio.h>
#include<string.h>
#include<errno.h>
extern int errno; //error number 
int main()
{
    FILE *fh;
    printf("Errno before : %d \n",errno);
    fh = fopen("dne.txt","r");

    if (fh == NULL)
    {
        fprintf(stderr,"Errno aftre : %d \n",errno);

      // perror("Error msg");
        fprintf(stderr,"Error msg : %s \n",strerror(errno));
    } else fclose(fh);

} 