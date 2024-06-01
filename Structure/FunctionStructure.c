#include<stdio.h>

typedef struct pokemon{
    int hp;
    int attack;
    int speed;
}pokemon;

void fun(pokemon p){
    printf("%d \n",p.hp);
    return;
}

int main()
{
    pokemon pikachu ;
    pikachu.hp=60;
    fun(pikachu);
    
    pokemon charizard;
    charizard.hp = 100;
    fun(charizard);
return 0;
} 