#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n*n matrix size:");
    scanf("%d", &n);

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter elements of %d row\n", i);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The  matrix A is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // now converting and saving the transpose

    for (int i = 0; i < n; i++) // previous row in nows column
    {
        for (int j = i; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("The transposed matrix will be:");
    printf("\n");
    // Mathi bata array ko element haru ko value change vai sakyo, so aba teo change vako matrix print garya
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
} 