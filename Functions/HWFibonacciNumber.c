#include <stdio.h>
int fab(int n)
{
    int a = 1;
    int b = 1;
    int sum = 0;
    if (n == 1)
    {
        printf("The nth fibonacci number is 1\n");
        return 1;
    }
    if (n == 2)
    {
        printf("The nth fibonacci number is 2\n");
        return 0;
    }

    for (int i = 3; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        if (n == i)
        {
            printf("The nth fibonacci number is %d\n", sum);
        }
    }
    if (sum % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    printf("n is :");
    scanf("%d", &n);

    int check = fab(n);
    if (check == 0)
    {
        printf("The nth fibonacci number is even .");
    }
    else
    {
        printf("The nth fibonacci number is odd .");
    }
    return 0;
} 