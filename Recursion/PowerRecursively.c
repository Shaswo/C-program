#include <stdio.h> // this is done recursively
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    int recAns;
    recAns = a * power(a, b - 1);

    return recAns;
}

int main()
{
    int a, b;
    printf("Enter a");
    scanf("%d", &a);
    printf("Enter n ");
    scanf("%d", &b);

    int p = power(a, b);

    printf("%d", p);

    return 0;
}