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
    Player P1;
    Goblin G1;
    Mage M1;
    Orc O1;

    srand(time(0)); // Seed random number generator

    int player__health = P1.gethealth();
    int enemy__health = 0;
    std::string enemy__name;
    char end_choice;
    int action;
    int atk_action;
    int player__damage_slash = P1.slashattack();
    int player__damage_punch = P1.punchattack();
    int enemy__damage = 0;
    int inv_action;
    int count = 0;

    while (P1.gethealth() > 0)
    {

        int random__enemy = rand() % 3;
        if (random__enemy == 0)
        {
            G1 = Goblin();
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
            count++;
            std::cout << "CYCLES : " << count << "\n";
            player__health = P1.gethealth();

            std::cout << "Player Health: " << player__health << "\t" << enemy__name << "\tHealth : " << enemy__health << std::endl;

            std::cout << "Choose\n";
            std::cout << "1. Attack\t 2.Inventory\n";
            std::cin >> action;

            switch (action)
            {
            case 1:
                std::cout << "1. Slash\t 2. Punch\n";
                std::cin >> atk_action;
                switch (atk_action)
                {
                case 1:
                    player__damage_slash = P1.slashattack();
                    if (random__enemy == 0)
                    {
                        G1.take__damage(player__damage_slash);
                        enemy__health = G1.gethealth();
                    }
                    else if (random__enemy == 1)
                    {
                        M1.take__damage(player__damage_slash);
                        enemy__health = M1.gethealth();
                    }
                    else
                    {
                        O1.take__damage(player__damage_slash);
                        enemy__health = O1.gethealth();
                    }
                    break;
                case 2:
                    player__damage_punch = P1.punchattack();
                    if (random__enemy == 0)
                    {
                        G1.take__damage(player__damage_punch);
                        enemy__health = G1.gethealth();
                    }
                    else if (random__enemy == 1)
                    {
                        M1.take__damage(player__damage_punch);
                        enemy__health = M1.gethealth();
                    }
                    else
                    {
                        O1.take__damage(player__damage_punch);
                        enemy__health = O1.gethealth();
                    }
                    break;
                }
                break;

            case 2:
                std::cout << "Choose\n";
                std::cout << "1. Health Potion\t 2. Defense Potion\t 3. Attack Potion\n";
                std::cin >> inv_action;
                switch (inv_action)
                {
                case 1:

                    P1.health__potion();
                    system("pause"); // works same as in bat file before cls happens pauses to show remaining potions

                    break;
                case 2:
                    P1.defence__potion();
                    system("pause");
                    break;
                case 3:
                    P1.attack__potion();
                    system("pause");
                    break;
                }
                break;
            }

            system("cls");
            std::cout << "\n"
                      << enemy__name << " \nATTACKS!!!\n";
            P1.take__damage(enemy__damage);

            if (enemy__health <= 0)
            {
                std::cout << "\n"
                          << enemy__name << " DEAD\n";
            }

            if (P1.gethealth() <= 0)
            {
                std::cout << "\nGAME OVER PLAYER DIED\n";
                break;
            }
        }
    }

    std::cout << "\nENTER A KEY TO EXIT\n";
    std::cin >> end_choice;

    if (end_choice == 'y')
    {
        system("cls");
    }

    return 0;
}
