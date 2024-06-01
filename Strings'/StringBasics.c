#include <stdio.h>
int main()
{
    char arr[3] = {'A', '$', 'B'};
    // or
    char brr[] = "Hello"; // This can be initialized as this way too
    printf("%c\n", arr[1]);

    for (int i = 0; i < 5; i++)
    {
        printf("%c", brr[i]);
    }
    printf("\n");

    // But if we have to print Physics wallah is best channel for coading
    // Then we have to count up to where will our loop will run
    // It will be impossible as size of senetnce increase
    // So we use Null character as stop point

    char crr[] = "Physics Wallah is best channel for coading\0";

    int i = 0;
    while(crr[i] != '\0') // \0 is used as ending point 
    {                       // \0 will never be printed but will have ascii value 0
        printf("%c", crr[i]);
        i++;
    }
printf("\n");
    // We can do it without putting \0 in last too as computer automatically will put \0 in last

        char drr[] = "Physics Wallah is best channel for coading";
   int j = 0;
   while(drr[j] != '\0'){
    printf("%c", drr[j]);
    j++;
   }
   
   
   
    return 0;
}
