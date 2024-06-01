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
        printf("Enter elements of %d row\n", i);
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
    

    // now making the matrix transpose 
 /*printf("The transpose is:\n");
 for (int i = 0; i < c; i++) // previous row in nows column
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
      
    } */

    // extension for storing transpose in new matrix and print that matrix

    int brr[c][r];
    for (int i = 0; i < c; i++) // previous row in nows column
    {
        for (int j = 0; j < r; j++)
        {
            brr[i][j]=arr[j][i];
        }
        printf("\n");
      
    }
    printf("The new matrix brr is :\n");
    for (int i = 0; i < c; i++) 
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
      
    return 0;
} 