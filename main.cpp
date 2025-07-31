// SHREYANSH VALORANT DELETE GARA
// 7/31/2025: i have deleted :)
#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <windows.h>
#include <stdlib.h>
#include "Player.h"
#include "Goblin.h"
#include "Mage.h"
#include "Orc.h"

#include <iostream>
#include <windows.h>
// func for welcome animation
const char Welcometext[] = "            WELCOME TO MADSLADS   ";

void Welcomestart(int delay_ms = 20)
{
  for (int i = 0; Welcometext[i] != '\0'; ++i)
  {
    std::cout << Welcometext[i];
    std::cout.flush();
    Sleep(delay_ms);
  }
  std::cout << std::endl;
}

// Functions for battle animation
const char Battletext[] = "            BATTLE STARTED!!!   ";

void animateLineForward(int length = 40, int delay_ms = 10)
{
  for (int i = 0; i < length; ++i)
  {
    std::cout << "=";
    std::cout.flush();
    Sleep(delay_ms);
  }
  std::cout << std::endl;
}

void battlestart(int delay_ms = 10)
{
  for (int i = 0; Battletext[i] != '\0'; ++i)
  {
    std::cout << Battletext[i];
    std::cout.flush();
    Sleep(delay_ms);
  }
  std::cout << std::endl;
}
void Playmusic()
{
  // PlaySoundW(L"C:\\Users\\USER\\Documents\\College\\Classes\\MADSLADS\\MADSLADS\\Wild Pokémon Battle - Pokémon RedBlueYellow Soundtrack.wav", NULL, SND_SYNC);
  // Cannot be added because external library Mmsystems.h must be downloaded, instead music is running from bat file
}

// GET RANDOM NUMBER FOR BUSH ATTACKS
int getRandNo()
{
  srand(time(NULL));

  int attackNum = rand() % 2;
  return attackNum;
}

// ENEMY GENERATION RANDOM VARIABLE
// 0->Goblin
// 1->Orc
// 2->Mage
int getRandomEnemy()
{
  srand(time(NULL));

  int enemyType = rand() % 3;
  return enemyType;
}

// MAP DRAWING FUNCTION
void map_func(int hero_cp_place, int hero_pp_place);
char map[64]; // 8x8 = 64 cells
int bush_prev_pp;

void map_func(int hero_cp_place, int hero_pp_place)
{
  for (int i = 0; i < 64; i++)
  {
    std::cout << "| ";

    if (i == hero_cp_place)
      std::cout << "*"; // Draw player symbol
    else
      std::cout << map[i]; // Draw original tile

    std::cout << " ";
    if ((i + 1) % 8 == 0)
      std::cout << "|\n\n";
  }
}

// K GAREKO SHREYANSHHHHH!!!!?????!!!????
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
void magedeadanimation()
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

void playerattackslash()
{
  int frame = 0;
  while (frame < 3)
  {
    system("cls");

    if (frame == 0)
    {
      std::cout << R"(
      ⠀⠀PLAYER UNSHEATS SWORD        
                     .--.
       >            /.--.\
          `         |====|
      `             |`::`|
               .-;`\..../`;-.
         /  /  |...::...|  \
          |   /'''::'''\   |
          \ /\;-,/\   ::   /\--;
          |\ <` >  >._::_.<,<__><|>
           `""`   /   ^^   \     <|>
                  |        |       <|>
                  |        |
                      __   |  
                     (  )  
)";
    }
    else if (frame == 1)
    {
      std::cout << R"(
 ⠀⠀HAHAHAHA MORTALLL         
          | ,          .--.
       < <|> >        /.--.\
       < <|> >`       |====|
       < <|> >        |`::`|
         <|>      .-;`\..../`;-.
         /\\/  /  |...::...|  \
         |:'\ |   /'''::'''\   |
          \ /\;-,/\   ::   /\--;
          |\ <` >  >._::_.<,<__>
          | `""`   /   ^^   \
          |        |        |  /
          |        |        |==|>
                      __   |  \
                     (  )  
              CHARGES ATTACK
)";
    }
    else if (frame == 2)
    {
      std::cout << R"(
            
         |             .--.
    --< <|> >--       /.--.\
 ---- < <|> > ----    |====|
     --< <|> > --     |`::`|
         <|>      .-;`\..../`;-.
         /\\/  /  |...::...|  \
         |:'\ |   /'''::'''\   |
          \ /\;-,/\   ::   /\--;
          |\ <` >  >._::_.<,<__>
          | `""`   /   ^^   \
          |        |        |  
          |        |        |  
                      __      
                     (  )     
               SWORD SHEATHED
)";
    }

    Sleep(900);
    frame++;
  }
  system("cls");
}
void playerattackpunch()
{
  int frame = 0;
  while (frame < 3)
  {
    system("cls");

    if (frame == 0)
    {
      std::cout << R"(
      ⠀⠀PLAYER UNSHEATS FISTS        
                     .--.
       >            /.--.\
          `         |====|
      `             |`::`|
               .-;`\..../`;-.
         /  /  |...::...|  \ <|><|>
          |   /'''::'''\   |   <|><|>
          \ /\;-,/\   ::   /\- <|><|>
          |\ <` >  >._::_.<,<_  OO
           `""`   /   ^^   \     
                  |        |       
                  |        |
                      __   |  
                     (  )  
)";
    }
    else if (frame == 1)
    {
      std::cout << R"(
 ⠀⠀      HAHAHAHA MORTALLL         
         PLAYER CHARGES FISTS        
                     .--.
       >            /.--.\
          `         |====|
      `             |`::`|
               .-;`\..../`;-.
         /  /  |...::...|  \ <|><|>
          |   /'''::'''\   |    <|><|>
          \ /\;-,/\   ::   /\--;    <|><|>
          |\ <` >  >._::_.<,<__><|>   OO
           `""`   /   ^^   \     
                  |        |       
                  |        |
                      __   |  
                     (  )  
)";
    }
    else if (frame == 2)
    {
      std::cout << R"(
      AHHHHHHHHHHHHHHHHH         
            
                      .--.
 --     - >          /.--.\
        `            |====|
       -             |`::`|
                 .-;`\..../`;-.
    -     <|><|>/  |...::...|  \ <|><|>
                   /'''::'''\   |    <|><|>
            /\;-,/\   ::   /\--;    <|><|>
          |\ <` >  >._::_.<,<__><|>   <|><|>
           `""`    /   ^^   \     
                   |        |       
                   |        |
                       __   |  
                      (  )  
)";
    }

    Sleep(900);
    frame++;
  }
  system("cls");
}
// ATTACK ARENA FUNCTION STARTS HERE
int attackArena(Player &P1, Goblin G1, Mage M1, Orc O1, int enemyType, int &isDead)
{

  int action, atk_action, inv_action;
  // int count = 0;
  int player__health;
  int player__damage_slash, player__damage_punch;
  int enemy__health = 0, enemy__damage = 0;
  std::string enemy__name;
  int random__enemy = enemyType;

  if (enemyType == 0)
  { // GOBLIN FIGHT
    // WHY TF IS THIS HERE MOHAK?
    //  G1 = Goblin();
    enemy__health = G1.gethealth();
    enemy__damage = G1.attack();
    enemy__name = "GOBLIN";
  }
  else if (enemyType == 1)
  { // ORC FIGHT

    enemy__health = O1.gethealth();
    enemy__damage = O1.attack();
    enemy__name = "ORC";
  }
  else
  { // MAGE FIGHT

    enemy__health = M1.gethealth();
    enemy__damage = M1.attack();
    enemy__name = "MAGE";
  }

  while (P1.gethealth() > 0 && enemy__health > 0)
  {

    system("cls");

    player__health = P1.gethealth();
    printHeader("A wild " + enemy__name + " appears!");

    printLine();
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
        playerattackslash();
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
        playerattackpunch();
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

      system("pause");
      break;
    }

    if (P1.gethealth() <= 0)
    {
      std::cout << "\nGAME OVER: You died.\n";
      isDead = 1;
      return 0;
    }
  }

  return 0;
}

int main()
{
  // ANIMATE IN FUNCTION CALL
  animateLineForward();
  Welcomestart();
  animateLineForward();
  Sleep(1000);
  // OBJECT DECLARATION
  Player P1;
  Goblin G1;
  Mage M1;
  Orc O1;

  srand(time(0));

  char end_choice;

  int enemyType;

  int isDead = 0;

  int new_health;

  int temp_potion_health = 0;
  int temp_potion_defense = 0;
  int temp_potion_attack = 0;

  // Initialize map with numbers or dots
  for (int i = 0; i < 64; i++)
  {
    map[i] = '.'; // use '.' for empty cell
    if (rand() % 100 < 25)
    {
      map[i] = 'W';
      bush_prev_pp = i;
    }
  }

  char hero_input;
  int hero_cp = 56; // start at bottom-left (row 7 col 0)
  int hero_pp = hero_cp;

  // BUSH ATTACK CHANCE VARIABLE
  int isAttacked = 0;

  while (true)
  {
    system("cls");

    if (isDead)
    {
      std::cout << '\n'
                << "YOU DIED!!! GAME OVER!!!" << '\n';
      break;
    }

    map_func(hero_cp, hero_pp);

    std::cout << "\nUse W/A/S/D to move, Q to quit: ";
    hero_input = getch();

    hero_pp = hero_cp;

    switch (tolower(hero_input))
    {
    case 'w':
      if (hero_cp >= 8)
        hero_cp -= 8;
      break;
    case 's':
      if (hero_cp <= 55)
        hero_cp += 8;
      break;
    case 'a':
      if (hero_cp % 8 != 0)
        hero_cp -= 1;
      break;
    case 'd':
      if (hero_cp % 8 != 7)
        hero_cp += 1;
      break;
    case 'q':
      exit(0);
    }

    if (map[hero_cp] == 'W')
    {
      int checkATK = getRandNo();
      if (checkATK == 1)
      {
        isAttacked = 1;
      }
      else
      {
        isAttacked = 0;
      }
    }

    // ATTACK ARENA STARTS HERE
    if (isAttacked)
    {
      system("cls");
      animateLineForward();
      battlestart();
      animateLineForward();
      Sleep(1000);
      system("cls");
      enemyType = getRandomEnemy();

      if (enemyType == 0)
      {
        new_health = attackArena(P1, G1, M1, O1, enemyType, isDead);
      }
      else if (enemyType == 1)
      {
        new_health = attackArena(P1, G1, M1, O1, enemyType, isDead);
      }
      else
      {
        new_health = attackArena(P1, G1, M1, O1, enemyType, isDead);
      }
    }

    isAttacked = 0;
  }

  // EXIT PART
  printLine();
  std::cout << "\nThanks for playing!\nPress 'y' then Enter to exit.\n> ";
  std::cin >> end_choice;

  if (end_choice == 'y')
  {
    system("cls");
  }
}