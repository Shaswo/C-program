// Code to find sum of digits of given integer using recursion

#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return n;

    int lastDigit = n%10;
    
    int recAns = lastDigit + sum((n/10)); 
    return recAns;
} 

int main()
{
    int n = 1234;

    int Add = sum(n);
    printf("%d",Add);

    return 0;
}  