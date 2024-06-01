#include <stdio.h>
#include <string.h>
typedef struct employee
{
    char name[50];
    int age;
    int salary;
    char address[50];
} emp;

typedef struct student{
emp a;
int hair;

}std;

int main()
{
    std ram;
    ram.a.age = 13;
    ram.a.salary = 344;
    strcpy(ram.a.name,"Ram");

    printf("%s",ram.a.name);

} 