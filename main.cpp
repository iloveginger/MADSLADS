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

    int player__health = P1.gethealth();
    int goblin__health = G1.gethealth();
    char end_choice;
    int action;                       // stores between the first two actions ie. Attack and inventory
    int atk_action;                   // stores between the second two actions ie. Slash and punch (punch hasnt been made)
    int player__damage = P1.attack(); // stores players attack damage in player__damage

    while (player__health > 0 && goblin__health > 0)
    {
        std::cout << "Player Health: " << player__health << "\t Goblin Health : " << goblin__health << std::endl; // Displays player health

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
                G1.take__damage(player__damage);//player__damage which is 40 is passed into take_damage function for goblin and the health of goblin is reduced by player__damage 

                //** NOTE ** : For now this is hardcode only for goblin but later since the enemy will be chosen in random (ie maybe goblin or mage or orc) a placeholder should be kept for those
                
                goblin__health = G1.gethealth();//stores the health that is run by G1.gethealth() into goblin__health
                break;
            }
            break;
        }
    }

    // int goblin__damage = G1.attack();

    // std::cout << "Goblin attacks: " << '\n';

    // P1.take__damage(goblin__damage);
    // player__health = P1.gethealth();

    // std::cout << "Player Health: " << player__health;

    std::cout << '\n'
              << "EXIT GAME?" << '\n';

    std::cin >> end_choice;

    if (end_choice == 'y')
    {
        system("cls");
    }
}