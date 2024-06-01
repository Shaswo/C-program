#include <stdio.h>
#include <limits.h>
int main()
{
    // int arr[7]={1,4,2,8,19,5,100}; // this wont when the elements are in minus

    int arr[2][2] = {1, 2, 3, -4};

    // yo garnu ko thau ma muni ko gara int max = -1; //array ko sab element vanda sano

    int max = INT_MIN;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
        printf("The max of %d row is %d", i, max);
        printf("\n");
    }

    return 0;
} 