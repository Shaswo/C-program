#include <stdio.h>
void reverse(int arr[],int si , int ei)
{
    for(int i=si, j=ei ; i<j ; i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]=temp;
    }
return;
}





int main()
{
    int n;
    printf("Enter total elements of array:");
    scanf("%d", &n);
    int k;
    printf("Rotate by :");
    scanf("%d", &k);

    int arr[n];
    for (int i = 0; i < n; i++) // input taking of elements of array.
    {
        printf("The %d indexed array input :", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) // printing the given initial array 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    k = k%n;
    reverse(arr , 0 , n-1); // reverses all elements from index 0 to index n -1
    reverse(arr,0,k-1); 
    reverse(arr,k,n-1);

    for(int i = 0; i<n ; i++){
        printf("%d ",arr[i]);
    }
    return 0; 
}