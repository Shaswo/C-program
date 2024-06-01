#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int maxSum = INT_MIN;
    int index;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            index = i;
        }
    }

    printf("%d is max sum and its index is %d.", maxSum, index);

    return 0;
} 