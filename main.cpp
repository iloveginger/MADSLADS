// SO, we are starting this project on 7/8/2025
#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include "Player.h"
#include "Goblin.h"
#include "Mage.h"
#include "Orc.h"

int main()
{

    // BASIC IDEA OF THE HOW THE FUNCTIONS WILL WORK

    Player P1;

    Goblin G1;

    Mage M1;

    Orc O1;

    srand(time(0)); // returns random number

    int player__health = P1.gethealth();
    int enemy__health = 0;   // made a new variable which stores enemy__health depending on the value of random enemy
    std::string enemy__name; // made a new string to store enemy__name based on what value of random enemy
    char end_choice;
    int action;                       // stores between the first two actions ie. Attack and inventory
    int atk_action;                   // stores between the second two actions ie. Slash and punch (punch hasnt been made)
    int player__damage = P1.attack(); // stores players attack damage in player__damage
    int enemy__damage = 0;            // made a new string to store enemy__name based on what value of random enemy
    int inv_action;
    int count = 0; // stores the value of count  and initializes it to zero

    while (P1.gethealth() > 0) // a while loop on top of everything which runs until player health is zero
    {
        int random__enemy = rand() % 3; // increase the num depending on amount of enemies
        if (random__enemy == 0)
        {
            G1 = Goblin(); // resets enemy to avoid infinite loop saying some enemy dead
            enemy__health = G1.gethealth();
            enemy__damage = G1.attack();
            enemy__name = "GOBLIN";
        }
        else if (random__enemy == 1)
        {
            M1 = Mage();
            enemy__health = M1.gethealth();
            enemy__damage = M1.attack();
            enemy__name = "MAGE";
        }
        else
        {
            O1 = Orc();
            enemy__health = O1.gethealth();
            enemy__damage = O1.attack();
            enemy__name = "ORC";
        }

        while (player__health > 0 && enemy__health > 0)
        {
            count = count + 1; // increases the value of count every time new enemy comes i.e when this while loop runs
            std::cout << "CYCLES :" << count << "\n";
            player__health = P1.gethealth();
            std::cout << "Player Health: " << player__health << "\t" << enemy__name << "\t" << "Health : " << enemy__health << std::endl; // Displays player health

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
                    if (random__enemy == 0)
                    {
                        G1.take__damage(player__damage); // player__damage which is 40 is passed into take_damage function for goblin and the health of goblin is reduced by player__damage
                        //** NOTE ** : For now this is hardcode only for goblin but later since the enemy will be chosen in random (ie maybe goblin or mage or orc) a placeholder should be kept for those

                        enemy__health = G1.gethealth();
                    } // stores the health that is run by G1.gethealth() into goblin__health
                    else if (random__enemy == 1)
                    {
                        M1.take__damage(player__damage);
                        enemy__health = M1.gethealth();
                    }
                    else
                    {
                        O1.take__damage(player__damage);
                        enemy__health = O1.gethealth();
                    }
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
                    P1.health__potion(player__health);
                    player__health = P1.gethealth();

                    break;
                }
            }

            system("cls");
            std::cout << "\n"
                      << enemy__name << " \nATTACKS!!!\n";
            P1.take__damage(enemy__damage);
            // player__health = P1.gethealth();
            if (enemy__health < 0)
            {
                std::cout << "\n "
                          << enemy__name << " DEAD\n";
            }
            if (P1.gethealth() <= 0) // checks if player health is zero or not and if its zero gives game over
            {
                std::cout << "\nGAME OVER PLAYER DIED";
                break;
            }
        }
    }
    std::cout << '\n'
              << "ENTER A KEY TO EXIT" << '\n';

    std::cin >> end_choice;

    if (end_choice == 'y')
    {
        system("cls");
    }
}