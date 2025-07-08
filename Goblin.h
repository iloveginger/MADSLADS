#ifndef GOBLIN_h
#define GOBLIN_h

class Goblin{
    protected:
    int health;
    int mana;
    int attack_value;
    public:
    Goblin(){}
    int attack();

    int take__damage(int atk_damage){

    }
};

#endif