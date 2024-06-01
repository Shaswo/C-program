#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct Cricketer
    {
        char firstname[50];
        char lastname[50];

        int age;
        int noOfmatches;
        float avgRuns;
    } cric;

    cric arr[2];
    for (int i = 0; i < 2; i++)
    {
        puts("Enter name:");
        scanf("%s", arr[i].firstname); // or use > not recommended gets(arr[i].name);
        scanf("%s", arr[i].lastname);
        puts("Enter age");
        scanf("%d", &arr[i].age);
        puts("Enter number of matches");
        scanf("%d", &arr[i].noOfmatches);
        puts("Enter average runs:");
        scanf("%f", &arr[i].avgRuns);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\nName: %s %s", arr[i].firstname, arr[i].lastname);
        printf("\nAge : %d ", arr[i].age);
        printf("\nNumber of Matches :%d", arr[i].noOfmatches);
        printf("\nAverage runs:%f", arr[i].avgRuns);
    }

    return 0;
} 