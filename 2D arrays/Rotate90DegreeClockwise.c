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

    //Now final output of 90 degree clockwise rotation 
     printf("\n");
    
    
    /*
    Yo maile garya muni ko code lea print chai output order ma garyo tara array ko vaue change garena .
     So array ko value change hunye gari garna reverse garnu paryo.
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j >= 0; j--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    } */


    //Output as the array code :
   
 for(int i = 0 ; i< n ; i++)
 {
    for(int j = 0 , k = n-1; j<k ; j++,k--)
    {
        
        int temp = arr[i][j];
        arr[i][j] = arr[i][k];
        arr[i][k]= temp;
    }
 }  
 
    
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