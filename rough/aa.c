#include <stdio.h>
#include<string.h>
typedef struct Employee{
    char adress[50];
    float salary;
    int age;
    char aName_first[50];
    
  char aName_last[50];




}emp;

int main(){
emp arr[4];
for(int i = 1 ; i<=4 ; i++){
    puts("Adress :");
    scanf("%s",arr[i].adress);

    puts("Enter salary :");
    scanf("%f",&arr[i].salary);

    puts("Enter age:");
    scanf("%d",&arr[i].age);

    puts("Enter employees 1st name  :");
    scanf("%s",arr[i].aName_first);

    puts("Enter employees last name  :");
    scanf("%s",arr[i].aName_last);
}

for(int i = 1 ; i<=4 ; i++)
{
    if(strcmp(arr[i].adress,"Kathmandu")==0 && arr[i].age>= 40 && arr[i].age ,50)
    {
        printf("name is %s %s",arr[i].aName_first , arr[i].aName_last );
    }
}



    return 0;
}   
