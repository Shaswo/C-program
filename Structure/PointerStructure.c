#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int attack;
    char name[30];
}pokemon;


int main()
{
pokemon pikachu;
pikachu.hp = 100;
pikachu.attack = 200;
strcpy(pikachu.name,"Pokemon");

pokemon *x = &pikachu;
printf("%p \n",&pikachu.hp);
printf("%p \n",&pikachu.attack);
printf("%p \n",pikachu.name); //string ko adress print garda no use of &

printf("%p \n",x);

printf("%s",pikachu.name);

    return 0;
} 