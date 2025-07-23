// SO, we are starting this project on 7/8/2025
#include <iostream>
#include <conio.h>

#include "Player.h"
#include "Goblin.h"
#include "Mage.h"

int main()
{

    // BASIC IDEA OF THE HOW THE FUNCTIONS WILL WORK

    Player P1;

    Goblin G1;

    int player_health = P1.gethealth();
    int goblin_health = G1.gethealth();
    char end_choice;
    int action;                       // stores between the first two actions ie. Attack and inventory
    int atk_action;                   // stores between the second two actions ie. Slash and punch (punch hasnt been made)
    int player_damage = P1.attack(); // stores players attack damage in player_damage
    int goblin__damage = G1.attack(); // stores players attack damage in player_damage
    int inv_action;                   // stores players choice for inventory

    while (player_health > 0 && goblin_health > 0)
    {
        player_health = P1.gethealth();
        std::cout << "Player Health: " << player_health << "\t Goblin Health : " << goblin_health << std::endl; // Displays player health

        std::cout << "Choose\n";
        std::cout << "1. Attack\t 2.Inventory\n";
        std::cin >> action;
        switch (action)
        {
        case 1:
            std::cout << "1. Slash\t 2. Punch\n ";
            std::cin >> atk_action;
            switch (atk_action)
            {
            case 1:
                G1.take__damage(player_damage); // player_damage which is 40 is passed into take_damage function for goblin and the health of goblin is reduced by player__damage
                //** NOTE ** : For now this is hardcode only for goblin but later since the enemy will be chosen in random (ie maybe goblin or mage or orc) a placeholder should be kept for those

                goblin_health = G1.gethealth(); // stores the health that is run by G1.gethealth() into goblin_health
                break;
            }
            break;
        case 2:
            std::cout << "Choose\n";
            std::cout << "1. Health Potion\t 2. Attack Potion\t 3. Defense Potion\n ";
            std::cin >> inv_action;
            switch (inv_action)
            {
            case 1:
                P1.health__potion(player_health);
                player_health = P1.gethealth();
                
                break;
            }
        }

        system("cls");
        std::cout << "\nGOBLIN ATTACKS!!!\n";
        P1.take__damage(goblin__damage);
        // player_health = P1.gethealth();
        
    }

    if(goblin_health<0){
        std::cout << "\nGOBLIN DEAD\n";
    }
    std::cout << '\n'
              << "EXIT GAME?" << '\n';

    std::cin >> end_choice;

    if (end_choice == 'y')
    {
        system("cls");
    }
}