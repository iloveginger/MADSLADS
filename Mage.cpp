#include<iostream>
#include "Mage.h"
using namespace std;

Mage::Mage(){
    cout<<" A Player appears!!\n";
    health = 50;
    attack_value = 30;
    mana = 30;
}

int Mage::attack(){
    return attack_value;
}
int Mage::take__damage(int atk_damage){
    health =  health -  atk_damage;
}
int Mage::gethealth(){
    return health;
}
