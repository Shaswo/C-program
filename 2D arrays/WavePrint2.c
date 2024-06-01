#include <stdio.h>
int main()
{

    int m, n;
    printf("The row is :");
    scanf("%d", &m);
    printf("The column is :");
    scanf("%d", &n);

    int a[m][n];
    printf("Enter the elements of matrix A:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // Qsn - 2
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = m - 1; i >= 0; i--)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
printf("\n");
    // Qsn 1

    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        else
        {
            for (int i = m - 1; i >= 0; i--)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
        return 0;
} 