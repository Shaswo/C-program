#include<stdio.h>
int main()
{
int arr[2][2] = {{1,2},{3,4}}; // muni ko comments ko process ra yo same ho 
/*arr[0][0]= 1;
arr[0][1]= 2;
arr [1][0]=3;
arr[1][1]=4*/


// to print 

/*for(int i = 0 ; i<2 ; i++)
{
    for(int j = 0; j<2 ; j++)
    {
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}*/

// to take input
int brr[3][3];
for(int i = 0 ; i<3 ; i++)
{
    for(int j = 0; j<3 ; j++)
    {
        printf("Enter the number");
        scanf("%d",&brr[i][j]);
    }
  
}
for(int i = 0 ; i<3 ; i++)
{
    for(int j = 0; j<3 ; j++)
    {
        printf("%d ", brr[i][j]);
    }
    printf("\n");
}
return 0; 
} 