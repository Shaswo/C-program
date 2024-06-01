#include<Stdio.h>
#include<string.h>

typedef struct employee{
    char name[50];
    char address[50];
    float salary;
    int age;

}employee;

int main(){
int n ;
printf("Total employees number :");
scanf("%d",&n);
employee arr[n];
for(int i = 0; i<n ; i++)
{
   puts("Enter name:");
    scanf("%s",arr[i].name);
      puts("Enter address:");
    scanf("%s",arr[i].address);
       puts("Enter salary:");
    scanf("%f",&arr[i].salary);
       puts("Enter age:");
    scanf("%d",&arr[i].age);
     
}
for(int i = 0 ; i<n ; i++)
{
    if(strcmp(arr[i].address,"kathmandu")==0 && arr[i].age<=50 && arr[i].age>=40)
    {
        printf("%s\n",arr[i].name);
    }
}
    return 0;

} 