#include <stdio.h>

int main () {
    struct pokemon{
        int hp;
        int attack;
        int speed;
        int tier;
    }pikachu,charizrad,mewtwo;
    // struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    printf("%d\n",pikachu.attack);

     // struct pokemon charizard;
    charizrad.attack = 130;
    charizrad.hp = 80;
    charizrad.speed = 80;
    charizrad.tier = 'S';

     printf("%c\n",charizrad.tier);


    mewtwo.attack = 170;
    mewtwo.hp = 150;
    mewtwo.speed = 80;
    mewtwo.tier = 'G';
    printf("%d\n",mewtwo.speed);
    return 0;
}