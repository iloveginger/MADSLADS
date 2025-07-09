#include<iostream>
#include "Player.h"
using namespace std;

Player::Player(){
    cout<<" A Player appears!!\n";
    health = 50;
    attack_value = 30;
    mana = 30;
}

int Player::attack(){
    return attack_value;
}
int Player::take__damage(int atk_damage){
    health =  health -  atk_damage;
}
int Player::gethealth(){
    return health;
}
