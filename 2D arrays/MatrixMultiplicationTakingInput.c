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

    // For matrix B
    int p, q;
    printf("The row is :");
    scanf("%d", &p);
    printf("The column is :");
    scanf("%d", &q);

    int b[p][q];
    printf("Enter the elements of matrix B:");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // For multiplication
    // a = m*n ,b= p*q
    if (n != p)
    {
        printf("The matrix cant be multiplied.");
    }
    else
    {
        int result[m][q];
        int cr = n;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < cr; k++)
                {
                    result[i][j] = result[i][j] + (a[i][k] * b[k][j]);
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}  