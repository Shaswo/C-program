#include<stdio.h>

int main() {  
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int a = 1;
    int b = 1;
    int sum = 1; 

    if (n == 1) {
        printf("The 1st Fibonacci is 1\n");
    } else if (n == 2) {
        printf("The 2nd Fibonacci is 1\n");
    } else {
        printf("The 1st Fibonacci is 1\n");
        printf("The 2nd Fibonacci is 1\n");

        for (int i = 3; i <= n; i++) {
            sum = a + b;
            a = b;
            b = sum;
            printf("The %dth Fibonacci is %d\n", i, sum);
            
        }
    }

    return 0;
}