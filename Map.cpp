#include<iostream>
#include<conio.h>   // For getch() on Windows
#include<stdlib.h>  // For system("cls")
using namespace std;

void map_func(int hero_cp_place, int hero_pp_place);
char map[64];  // 8x8 = 64 cells
int bush_prev_pp;

int main() {
    // Initialize map with numbers or dots
    for (int i = 0; i < 64; i++) {
        map[i] = '.';  // use '.' for empty cell
        if(rand()%100<25)
        {
            map[i]='W';
            bush_prev_pp=i;
        }
    }

    char hero_input;
    int hero_cp = 56;   // start at bottom-left (row 7 col 0)
    int hero_pp = hero_cp;

    while (true) {
        system("cls");
        map_func(hero_cp, hero_pp);

        cout << "\nUse W/A/S/D to move, Q to quit: ";
        hero_input = getch();

        hero_pp = hero_cp;

        switch (tolower(hero_input)) {
            case 'w':
                if (hero_cp >= 8) hero_cp -= 8;
                break;
            case 's':
                if (hero_cp <= 55) hero_cp += 8;
                break;
            case 'a':
                if (hero_cp % 8 != 0) hero_cp -= 1;
                break;
            case 'd':
                if (hero_cp % 8 != 7) hero_cp += 1;
                break;
            case 'q':
                exit(0);
        }
    }

    return 0;
}

void map_func(int hero_cp_place, int hero_pp_place) {
    for (int i = 0; i < 64; i++) {
        cout << "| ";
        
        if (i == hero_cp_place)
            cout << "*";       // Draw player symbol
        else
            cout << map[i];    // Draw original tile

        cout << " ";
        if ((i + 1) % 8 == 0)
            cout << "|\n\n";
    }
}
