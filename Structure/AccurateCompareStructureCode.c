#include <stdio.h>
#include <string.h>
typedef struct employee
{
    char name[50];
    int age;
    int salary;
    char address[50];
} emp;

int main()
{
    emp arr[4];
    for (int i = 0; i < 4; i++)
    {
        puts("Enter name:");
        scanf("%s", arr[i].name);
        puts("Enter age:");
        scanf("%d", &arr[i].age);
        puts("Enter address:");
        scanf("%s", arr[i].address);
    }

    for (int i = 0; i < 4; i++)
    {
        int result = strcmp(arr[i].address, "Kathmandu");
        if (result == 0)
        {
            if (arr[i].age > 40)
            {
                printf("Employee named %s is Eligible\n",arr[i].name);
            }
             else
        {
            printf("Employee named %s is Not eligible\n",arr[i].name);
        }
        }
        else
        {
            printf("Employee named %s is Not eligible\n",arr[i].name);
        }
    }

    return 0;
} 