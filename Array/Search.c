#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int x = 5; // let
    // now checking if element x = 4, is present of not in above array
    bool flag = false;
    int idx = -1;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == x)
        {

            flag = true;
            idx = i;
            break;
        }
    }

    if (flag == 0)
    {
        printf("The given element %d is not present in the array.", x);
    }
    else
    {
        printf("The element %d is present in the array and its index is %d. ", x, idx);
    }
    int sum = 0;
    for(int j = 1; j<=100; j++)
    {
        sum = sum + j;
    }
    printf("Sum = %d",sum);

    return 0;
} 