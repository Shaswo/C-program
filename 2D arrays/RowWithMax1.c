#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][4] = {1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int maxCount = INT_MIN;
    int index;
    for (int i = 0; i < 3; i++)
    {
        int count = 0;

        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count = count + 1;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }

    printf("%d index has max count of 1.\n", index);
    printf("The max count is %d.",maxCount);

    return 0;
}