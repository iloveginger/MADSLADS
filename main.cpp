// SO, we are starting this project on 7/8/2025
#include <iostream>
#include "Player.h"
#include "Goblin.h" 
using namespace std;
int main(){

    Player P1;
    
    Goblin G1;

    int player__health = P1.gethealth();
    int goblin__health = G1.gethealth();

    cout << player__health;
    cout << goblin__health;
}