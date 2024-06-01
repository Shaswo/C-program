#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    puts("Enter the string:"); //Puts automatically gives \n
    
    gets(str);
    printf("The input taken is :%s",str);

//T0 count size of array taken
    int size = 0;
    int k = 0;
    while(str[k] != '\0')
    {
        size++;
        k++;
    }


printf("\nThe size of array is :%d",size);

//For reverse

for(int i =0 ,j = size-1 ; i<=j ; i++ , j-- )
{
    char temp = str[i];
    str[i]= str[j];
    str[j]= temp;
}
//puts("The reverse is :");
//puts(str);
printf("\n%s",str);

    return 0;
} 