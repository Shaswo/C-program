#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct student{
    int roll;
    float name[50];
    float depart[50];
    float course[50];
    int year ;
}student;

void check(student s1, student s2){
    if(s1.roll==s2.roll)
    {
        printf("The roll is same %s");

    }
    else printf("The roll is different");

    return;
}
bool sameDepartment(student s1 ,student s2){
   return strcmp(s1.depart,s2.depart)==0;
     
}



int main()
{
    student s1;
    s1.roll = 1;
   strcpy(s1.depart,"Science");


    student s2;
   //strcpy(s2.depart,"Computer Science");
    s2.roll = 1;
    strcpy(s2.depart,"social");
    check(s1,s2);
bool sameDepart = false;
if(sameDepartment(s1,s2)){
    sameDepart = true;
    printf("Student have same department %s",s1.depart);
}

if(sameDepart==false){
    printf("The department is different.");
}
 



    return 0;
}  