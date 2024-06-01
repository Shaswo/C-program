#include<Stdio.h>
#include<string.h>

typedef struct employee{
    char name[50];
    char address[50];
    float salary;
    int age;

}employee;

typedef struct student{
   struct employee a;
    int class;
    
}student;

int main(){
int n ;

student arr[n];
arr[0].class = 5;
strcpy(arr[0].a.name,"kathmandu");
printf("%s",arr[0].a.name);
puts("Enter name:");
scanf("%s",arr[0].a.address);

printf("%s",arr[0].a.address);
    return 0;

} 