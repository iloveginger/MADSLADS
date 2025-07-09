#ifndef MAGE_h
#define MAGE_h

class Mage{
    protected:
    int health;
    int mana;
    int attack_value;
    public:
    Mage();
    int attack();

    int take__damage(int atk_damage);

    int gethealth();
};

#endif
