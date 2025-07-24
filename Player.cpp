#include <iostream>
#include "Player.h"

using namespace std;

Player::Player()
{
    cout << " A Player appears!!\n";
    health = 50;
    attack_value = 30;
    mana = 30;
    health_potion = 30;
    health_potion_count = 3;
}

int Player::attack()
{
    return attack_value;
}
int Player::take__damage(int atk_damage)
{
    health = health - atk_damage;
    return health;
}
int Player::gethealth()
{
    return health;
}

void Player::health__potion()
{
    if (health_potion_count > 0)
    {
        health += health_potion;
        health_potion_count--;
        cout << "\nUsed one health potion Now only " << health_potion_count << " Remaining\n";
    }
    else
    {
        cout << "You Ran Out Of health potions\n";
    }
}
