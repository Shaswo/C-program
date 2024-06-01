#include <stdio.h>
typedef struct book{
    char bName[50];
    float price;
    char aName_first[50];
    
  char aName_last[50];




}book;

int main(){
book arr[4];
for(int i = 1 ; i<=4 ; i++){
    puts("Enter name of book :");
    scanf("%s",arr[i].bName);

    puts("Enter price :");
    scanf("%f",&arr[i].price);

    puts("Enter author's 1st name  :");
    scanf("%s",arr[i].aName_first);

    puts("Enter author's last name  :");
    scanf("%s",arr[i].aName_last);
}
for(int i = 1 ; i<=4 ; i++)
{
    if(arr[i].price > 1000){
        printf("The name of author is %s %s",arr[i].aName_first,arr[i].aName_last);
    }
}



    return 0;
}  