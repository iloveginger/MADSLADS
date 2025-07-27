#include<iostream>
#include "Orc.h"
using namespace std;

Orc::Orc(){
    // cout<<"\n A wild Orc appears!!\n";
    health = 40;
    attack_value = 25;
    mana = 10;
}

int Orc::attack(){
    return attack_value;
}
int Orc::take__damage(int atk_damage){
    health =  health -  atk_damage;
}

int Orc::gethealth(){
    return health;
}
