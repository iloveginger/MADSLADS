#include<iostream>
#include "Player.h"

using namespace std;

Player::Player(){
    cout<<" A Player appears!!\n";
    health = 50;
    attack_value = 30;
    mana = 30;
    health_potion = 50;
    health_potion_count=3;
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

int Player::health__potion(int health_placeholder){
    while(health_potion_count>0){
    health = health + health_potion;
    health_potion_count--;
    cout<<health_potion_count<<" remaining\n";

    }
    if(health_potion_count==0){
        cout << "\nPOTION LIMIT REACHED\n";
    }
    return health_placeholder;
}

