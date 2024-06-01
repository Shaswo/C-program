#include <stdio.h> // extra arrau brr[] is not used
void reverse(int arr[])
{
    for (int i = 0, j = 4; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    reverse(arr);

    for(int i = 0; i<5 ; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
} 