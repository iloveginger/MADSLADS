#include<iostream>
#include "Mage.h"
using namespace std;

Mage::Mage(){
    cout<<" A Mage has Teleported in !\n";
   
    health = 30;
    attack_value = 20;
    mana = 70;
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
