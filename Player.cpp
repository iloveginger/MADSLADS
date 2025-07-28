#include <iostream>
#include "Player.h"

using namespace std;

Player::Player()
{
    cout << " A Player appears!!\n";
    health = 50;
    attack_value_slash = 20;
    attack_value_punch = 30;
    mana = 30;
    health_potion = 100;
    health_potion_count = 3;
    defence_potion_count = 3;
    tempo_attack_bonus = 0;
    attack_potion_count = 3;
    tempo_defence_bonus = 0;
}

int Player::slashattack()
{
    int increase_attack_slash = tempo_attack_bonus + attack_value_slash;
    tempo_attack_bonus = 0;
    return increase_attack_slash;
}
int Player::punchattack()
{
    int increase_attack_punch = tempo_attack_bonus + attack_value_punch;
    tempo_attack_bonus = 0;
    return increase_attack_punch;
}
int Player::take__damage(int atk_damage)
{
    int defence_damage = atk_damage - tempo_defence_bonus;
 
    health -= defence_damage;
    if (health>50){
        health=50;
    }
    tempo_defence_bonus = 0;
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

void Player::defence__potion()
{
    if (defence_potion_count > 0)
    {
        tempo_defence_bonus = 10;
        defence_potion_count--;
        cout << "\nUsed one defence potion Now only " << defence_potion_count << " Remaining\n";
    }
    else
    {
        cout << "You Ran Out Of defence potions\n";
    }
}

void Player::attack__potion()
{
    if (attack_potion_count > 0)
    {
        tempo_attack_bonus = 10;
        attack_potion_count--;
        cout << "\nUsed one attack potion Now only " << attack_potion_count << " Remaining\n";
    }
    else
    {
        cout << "You Ran Out Of attackpotions\n";
    }
}
