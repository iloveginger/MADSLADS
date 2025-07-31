#include <iostream>
#include <windows.h>

const char Battletext[] = "            BATTLE STARTED!!!   ";

void animateLineForward(int length = 40, int delay_ms = 20) {
    for (int i = 0; i < length; ++i) {
        std::cout << "=";
        std::cout.flush();
        Sleep(delay_ms);
    }
    std::cout << std::endl;
}

void battlestart(int delay_ms = 20) {
    for (int i = 0; Battletext[i] != '\0'; ++i) {
        std::cout << Battletext[i];
        std::cout.flush();
        Sleep(delay_ms);
    }
    std::cout << std::endl;
}
void Playmusic(){
        PlaySoundW(L"C:\\Users\\USER\\Documents\\College\\Classes\\MADSLADS\\MADSLADS\\Wild Pokémon Battle - Pokémon RedBlueYellow Soundtrack.wav", NULL, SND_SYNC);
        //Cannot be added because external library Mmsystems.h must be downloaded, instead music is running from bat file
}
int main() {
    animateLineForward();
    battlestart();
    animateLineForward();
    return 0;
}