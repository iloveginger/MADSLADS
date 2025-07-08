#ifndef PLAYER_h
#define PLAYER_h

class Player{
    protected:
    int health;
    int mana;
    int attack_value;
    public:
    Player(){}
    int attack();

    int take__damage(int atk_damage){
        
    }

    int gethealth(){
        return health;
    }
};

#endif