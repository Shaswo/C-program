#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wed");
        break;
    case 4:
        printf("Thus");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    defult:
        printf("Invalid number");
        break;
    }
    return 0;
} 