#ifndef ORC_h
#define ORC_h

class Orc{
    protected:
    int health;
    int mana;
    int attack_value;
    public:
    Orc();
    int attack();

    int take__damage(int atk_damage);

    int gethealth();
};

#endif
