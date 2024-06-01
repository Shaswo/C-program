#include <stdio.h>
int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int sumEven = 0;
    int sumOdd = 0;
    for (int i = 0; i <= 6; i++)
    {
        if (i % 2 == 0)
        {
            sumEven = sumEven + arr[i]; 
        }
        else
        {
            sumOdd = sumOdd + arr[i];
        }

    }

     int difference = sumEven - sumOdd;
     
    printf("THe difference is : %d",difference);
    return 0;
}