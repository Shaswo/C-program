#include<stdio.h>
int main()
{
    struct pokemon
    { // User defined datatype
        int hp;
        int speed;
        int attack;
        char tier;
    }pikachu,charizard,shaswot;

    // struct pokemon pikachu;
    // pikachu.attack = 60;
    // pikachu.hp = 50;
    // pikachu.speed = 100;
    // pikachu.tier = 'A';

    // printf("%d ", pikachu.attack);

    // struct pokemon charizard;
    // charizard.attack = 130;
    // charizard.speed = 80;
    // charizard.hp = 80;
    // charizard.tier = 'S';
    // printf("%d ", charizard.attack);
    // printf("%c ", pikachu.tier);

    // // Taking Input
    // struct pokemon shaswot;
    // printf("Enter attack of pikachu :");
    // scanf("%d", &shaswot.attack);
    // printf("%d", shaswot.attack);
   



pikachu.attack = 60;
pikachu.hp = 50;
pikachu.speed = 100;
pikachu.tier = 'A';

printf("%d ",pikachu.attack);




charizard.attack = 130;
charizard.speed = 80;
charizard.hp = 80;
charizard.tier = 'S';
printf("%d ",charizard.attack);
printf("%c ",pikachu.tier);


//Taking Input
printf("Enter attack of pikachu :");
scanf("%d",&shaswot.attack);
printf("%d",shaswot.attack);
   
   
   
   
   
    return 0;
} 