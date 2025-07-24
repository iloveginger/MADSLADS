#ifndef PLAYER_h
#define PLAYER_h

class Player
{
protected:
    int health;
    int mana;
    int attack_value;
    int health_potion;
    int health_potion_count;

public:
    Player();
    int attack();

    int take__damage(int atk_damage);

    int gethealth();

    void health__potion();
};

#endif
