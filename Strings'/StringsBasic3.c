//Taking input in strings 
#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
printf("Enter your input :");
/*scanf("%s",str);
printf("Your input is: %s", str );*/

// But this has problem . It only prints up to where there is no space
//Give input Shaswot Paudel then it prints only Shaswot

// so we follow following way to take entire input

/*gets(str);
printf("Your input is: %s", str );*/

// There is another was but not recommendef

scanf("%[^\n]s",str);
printf("Your input is: %s", str );

return 0;

}  