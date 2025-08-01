#ifndef PLAYER_h
#define PLAYER_h

class Player
{
protected:
    int health;
    int mana;
    int attack_value_slash;
    int attack_value_punch;
    int health_potion;
    int health_potion_count;
    int defence_potion_count;
    int tempo_attack_bonus;
    int attack_potion_count;
    int tempo_defence_bonus;

public:
    Player();
    int slashattack();
    int punchattack();

    int take__damage(int atk_damage);

    int gethealth();

    void health__potion();
    void defence__potion();
    void attack__potion();

    void update__health(int new_health);
};

#endif
