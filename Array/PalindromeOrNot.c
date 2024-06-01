#include <stdio.h> //first array reversed then checked if it is still same as initial while reversed too 
void reverse(int arr[])
{
    int a =0;
    for (int i = 0, j = 6; i < j; i++, j--)
    {
        if(arr[i]!=arr[j])
        {
           a = 1;
           break;

        }

    }
    if(a==1){
        printf("The array is not pallindrome.");
    }
    else{
        printf("The array is pallindrome.");
    }
    return;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 3, 2, 1};
   reverse(arr);


    return 0;
} 