#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns:");
    scanf("%d",&c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        printf("Enter elements of %d row", i);
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The  matrix A is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("For matrix B");
    int brr[r][c];
    for (int i = 0; i < r; i++)
    {
        printf("Enter elements of %d row", i);
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("The  matrix B is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    printf("The sum of the matrices A and B is:\n");
    int result[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
          result[i][j] = arr[i][j] + brr[i][j]; 
        }
       
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }



    
    return 0;
} 


















