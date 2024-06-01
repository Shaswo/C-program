#include<stdio.h>
int main()
{
    FILE *ptr = fopen("CW.txt", "r"); // File khulyo aba read garni write edit garni garna milxa
    char str[100];                         // Hami lea lekhya text khas ma aauta string ho
    // To read
    while (fgets(str, 100, ptr) != NULL)
    {
        printf("%s", str);
    }

    // FILE *ptr = fopen("PW.txt", "w"); // creates file
    // char str[] = "I am reading nonsense.";
    // fputs(str, ptr);
    // fclose(ptr);

    return 0;
} 