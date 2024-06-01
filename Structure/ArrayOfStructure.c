#include <stdio.h>
#include <string.h>
int main()
{
   typedef struct Book{
    float price;
    int page;
    float name[30];

   }book;

   book arr[3];
   arr[0].page = 200;
   arr[0].price = 300.75;
   strcpy(arr[0].name,"To kill a mocking bird");

   arr[1].page = 300;
   arr[1].price = 400.005;
   strcpy(arr[1].name,"Encyclopedia");

   arr[2].page = 1000;
   arr[2].price = 2000;
   strcpy(arr[2].name,"Tomb Raider");

for(int i = 0; i<3 ; i++)
{
    printf("Name is '%s' .",arr[i].name);
    printf("\nPages are :%d",arr[i].page);
    printf("\nPrice is %f:",arr[i].price);


}
return 0;
} 