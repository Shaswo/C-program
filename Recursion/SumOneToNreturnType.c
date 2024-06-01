#include <stdio.h>
int sum(int n)
{

    if (n == 1 || n == 0)
        return n;
    int recAns = n + sum(n - 1);
    return recAns;
}

int main()
{
    int n;
    printf("Enter n");
    scanf("%d", &n);
    int s = sum(n);
    printf("Factorial is %d", s);
    return 0;
}
