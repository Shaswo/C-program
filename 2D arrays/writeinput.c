#include<stdio.h>
int main()
{
int n;
printf("Enter the number of students:");
scanf("%d",&n);

int arr[n][3];

for(int i = 0 ; i<n , i++)
{
  

    for(int j = 0; j<3 ; j++)
    {
        printf("The marks of %d student in Physics:");
        scanf("%d",&arr[i][j]);
    }


}



return 0; 
} 