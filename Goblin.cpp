#include<iostream>
#include "Goblin.h"
using namespace std;

Goblin::Goblin(){
    cout<<" A wild goblin appears!!\n";
    health = 40;
    attack_value = 40;
    mana = 10;
}

int Goblin::attack(){
    return attack_value;
}
int Goblin::take__damage(int atk_damage){
    health =  health -  atk_damage;
}
