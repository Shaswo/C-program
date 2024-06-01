#include<stdio.h>
#include<string.h>

typedef struct person{
    int age ;
    float weight;
}person;


int main()
{
    person ram;
    person *x = &ram;
    x->age = 40;
    x->weight = 80.5;

    printf("age : %d \n ",ram.age);
    
    return 0 ;
} 
