#include<iostream>
#include "Inventory.h"
using namespace std;

class Inventory{
    protected:
    int attack_potion;
    int defence_potion;
    int health_potion = 50;

    Inventory(){};

    int health__potion(int health){
        health = health + health_potion;
        return health;
    }
};