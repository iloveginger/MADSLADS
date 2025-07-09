// SO, we are starting this project on 7/8/2025
#include <iostream>
#include "Player.h"
#include "Goblin.h"

int main(){

    //BASIC IDEA OF THE HOW THE FUNCTIONS WILL WORK

    Player P1;
    
    Goblin G1;

    int player__health = P1.gethealth();
    int goblin__health = G1.gethealth();

    std::cout << "Player Health: " << player__health << '\n';

    int goblin__damage = G1.attack();

    std::cout << "Goblin attacks: " << '\n';

    P1.take__damage(goblin__damage);
    player__health = P1.gethealth();

    std::cout << "Player Health: " << player__health;

}
