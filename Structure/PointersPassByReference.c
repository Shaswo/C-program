#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int attack;
    char name[30];
}pokemon;


int main(){

    pokemon pikachu;
    
    pokemon *x = &pikachu;

    x->attack = 40;
    (*x).hp = 100;
    strcpy((*x).name,"Hello");

printf("\n %d",pikachu.attack);// Pass by reference vai rako rayexa
printf("\n %d",(*x).hp);

} 