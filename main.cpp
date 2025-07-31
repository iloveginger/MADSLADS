#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <windows.h>
#include "Player.h"
#include "Goblin.h"
#include "Mage.h"
#include "Orc.h"

void printLine(int length = 50, char ch = '=')
{
    for (int i = 0; i < length; ++i)
        std::cout << ch;
    std::cout << "\n";
}

void printHeader(const std::string &title)
{
    printLine();
    std::cout << std::setw(25 + title.length() / 2) << title << "\n";
    printLine();
}
void goblinanimation()
{
    int frame = 0;
    while (frame < 3)
    {
        system("cls");
        if (frame == 0)
        {
            std::cout << R"(
       ,      ,
      /(.-""-.)\ 
  |\  \/      \/  /|
  | \ / =.  .= \ / |
  \( \   o\/o   / )/
   \_, '-/  \-' ,_/
     /   \__/   \ 
     \ \__/\__/ /
   ___\ \|--|/ /___
 /`    \      /    `\
/       '----'       \
Goblin grins greedily...
)";
        }
        else if (frame == 1)
        {
            std::cout << R"(
       ,      ,
      /(.-""-.)\ 
  |\  \ ATTACK  \/  /|
  | \ /  >.<  \ / |
  \( \   __   / )/
   \_, '-/  \-' ,_/
     /   \__/   \ 
     \ \__/\__/ /
   ___\ \|--|/ /___
 /`    \      /    `\
/       '----'       \
Goblin prepares to strike!
)";
        }
        else if (frame == 2)
        {
            std::cout << R"(
       ,      ,
      /(x.__.x)\ 
  |\  \/      \/  /|
  | \ /  ===  \ / |
  \( \   \/   / )/
   \_, '-/  \-' ,_/
     /   \__/   \ 
     \ \__/\__/ /
   ___\ \|--|/ /___        ||
 /`    \      /    `\     ==|>>>>>>>>>>>
/     '----'         \     ||
Goblin slashes with his dagger!
)";
        }
        Sleep(900);
        frame++;
    }
    system("cls");
}

void mageanimation()
{
    int frame = 0;
    while (frame < 3)
    {
        system("cls");
        if (frame == 0)
        {
            std::cout << R"(
                           /\
                          /  \
                         |    |
                       --:'''':--
                         :'_' :
                         _:"":\___
              ' '      ____.' :::     '._
             . *=====<<=)           \    :
              .  '      '-'-'\_      /'._.'
                               \====:_ ""
                              .'     \\
                             :       :
                            /   :    \
                           :   .      '.
               ,. _        snd :  : :      :
            '-'    ).          :__:-:__.;--'
          (        '  )        '-'   '-'
Mage prepares a powerful spell...
)";
        }
        else if (frame == 1)
        {
            std::cout << R"(
                           /\
                          /  \
                         | () |
                       --:'''':--
                         :'_' :
                         _:"":\___
              ' '      ____.' :::     '._
             . *=====<<=)           \    :
              .  '      '-'-'\_      /'._.'
                               \====:_ ""
                              .'     \\
                             :       :
                            /   :    \
                           :   .      '.
               ,. _        snd :  : :      :
            '-'    ).          :__:-:__.;--'
          (        '  )        '-'   '-'
Mage channels magical energy!
)";
        }
        else if (frame == 2)
        {
            std::cout << R"(
                           /\
                          /  \
                         |  () |
                       --:'''':--
                         :'_' :
                         _:"":\___
  ===========            ' '      ____.' :::     '._
======================><<=)  *>>>>>  \    :
  ===========            .  '      '-'-'\_      /'._.'
                               \====:_ ""
                              .'     \\
                             :       :
                            /   :    \
                           :   .      '.
               ,. _        snd :  : :      :
            '-'    ).          :__:-:__.;--'
          (        '  )        '-'   '-'
Mage casts a blazing fireball!
)";
        }
        Sleep(900);
        frame++;
    }
    system("cls");
}

void orcanimation()
{
    int frame = 0;
    while (frame < 3)
    {
        system("cls");

        if (frame == 0)
        {
            std::cout << R"(
      __,='`````'=/__
     '//  (o) (o) \ `'        
     //|     ,_)   |\\        
   ,-~~~\\  `'==='  /~~~-,      
  /        `----'       \\     
 /      Orc Warrior      \\    
(        _________       )    
 \\       \_______/      /     
  \\         ||         /      
   `._       ||       //'        
      ~'-. . ||..-'~`          
         (  )  (  )
Orc growls menacingly...
)";
        }
        else if (frame == 1)
        {
            std::cout << R"(
      __,='`````'=/__
     '//  (o) (o) \ `'        
     //|     ,_)   |\\        
   ,-~~~\\  `'==='  /~~~-,      
  /       \  ^   /     \\      
 /        | '-' |       \\     
(      Orc swings axe     )   
 \\       \___/          /    
  \\       ||           /     
   `._    ||        //'       
      ~'-..||..-'~`          
         (  )  (==)
Orc raises his axe...
)";
        }
        else if (frame == 2)
        {
            std::cout << R"(
      __,='`````'=/__
     '//  (x) (x) \ `'        
     //|     ,_)   |\\               ]]]
   ,-~~~\\  `'==='  /~~~-,         ]]]]]]]]]
  /      --\   /--        \\      ]]]]]]]]]]
 /       /  '-'  \         \\       ]]
(    Orc slashes fiercely!   )     ]]
 \\          \_/           /        ]]
  \\          ||          /         ]]
   `._       ||        //' ======= ]]
      ~'-..__||..-'~`          
         (  )  (==>)
Orc slashes with his axe!
)";
        }

        Sleep(900);
        frame++;
    }
    system("cls");
}

int main()
{
    Player P1;
    Goblin G1;
    Mage M1;
    Orc O1;

    srand(time(0));

    char end_choice;
    int action, atk_action, inv_action;
    int count = 0;
    int player__health;
    int player__damage_slash, player__damage_punch;
    int enemy__health = 0, enemy__damage = 0;
    std::string enemy__name;
    int enemy_defeat = 0;

    printHeader("WELCOME TO MONSTER BATTLE");

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

        while (P1.gethealth() > 0 && enemy__health > 0)

        {

            count++;
            player__health = P1.gethealth();
            printHeader("A wild " + enemy__name + " appears!");

            printLine();
            std::cout << "CYCLE: " << count << "\n";
            std::cout << "Player Health: " << player__health << "\n";
            std::cout << enemy__name << " Health: " << enemy__health << "\n";
            printLine();

            std::cout << "Choose Action:\n";
            std::cout << "1. Attack\n2. Inventory\n> ";
            std::cin >> action;

            switch (action)
            {
            case 1:
                std::cout << "\nChoose Attack Type:\n";
                std::cout << "1. Slash Attack\n2. Punch Attack\n> ";
                std::cin >> atk_action;

                if (atk_action == 1)
                {
                    player__damage_slash = P1.slashattack();
                    if (random__enemy == 0)
                        G1.take__damage(player__damage_slash);
                    else if (random__enemy == 1)
                        M1.take__damage(player__damage_slash);
                    else
                        O1.take__damage(player__damage_slash);
                }
                else
                {
                    player__damage_punch = P1.punchattack();
                    if (random__enemy == 0)
                        G1.take__damage(player__damage_punch);
                    else if (random__enemy == 1)
                        M1.take__damage(player__damage_punch);
                    else
                        O1.take__damage(player__damage_punch);
                }

                // Update enemy health
                if (random__enemy == 0)
                    enemy__health = G1.gethealth();
                else if (random__enemy == 1)
                    enemy__health = M1.gethealth();
                else
                    enemy__health = O1.gethealth();

                break;

            case 2:
                std::cout << "\nChoose Inventory Item:\n";
                std::cout << "1. Health Potion\n2. Defense Potion\n3. Attack Potion\n> ";
                std::cin >> inv_action;

                switch (inv_action)
                {
                case 1:
                    P1.health__potion();
                    break;
                case 2:
                    P1.defence__potion();
                    break;
                case 3:
                    P1.attack__potion();
                    break;
                default:
                    std::cout << "Invalid choice!\n";
                    break;
                }

                system("pause");
                break;
            }

            system("cls");

            if (enemy__health > 0)
            {
                std::cout << "\n"
                          << enemy__name << " attacks!\n";
                if (enemy__name == "GOBLIN")
                {
                    goblinanimation();
                }
                else if (enemy__name == "MAGE")
                {
                    mageanimation();
                }
                else
                {
                    orcanimation();
                }
                P1.take__damage(enemy__damage);
            }

            if (enemy__health <= 0)
            {
                std::cout << "\n"
                          << enemy__name << " has been defeated!\n";

                enemy_defeat++;
                system("pause");
                break;
            }

            if (P1.gethealth() <= 0)
            {
                std::cout << "\nGAME OVER: You died.\n";
                std::cout << "\nYou defeated :\t" << enemy_defeat << " enemies And survived :" << count << " Cycles\n";
                break;
            }
        }
    }

    printLine();
    std::cout << "\nThanks for playing!\nPress 'y' then Enter to exit.\n> ";
    std::cin >> end_choice;

    if (end_choice == 'y')
    {
        system("cls");
    }

    return 0;
}
