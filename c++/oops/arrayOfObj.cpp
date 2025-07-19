#include <iostream>
using namespace std;

class Gun {
public:
    int ammo;
    int damage;
    int scope;
};

class Player {
private:
    class Helmet {
        int hp;
        int level;
    public:
        void setHp(int hp) {
            this->hp = hp;
        }
        void setLevel(int level) {
            this->level = level;
        }
        int getHp() {  // Fixed: removed parameter
            return hp;
        }
        int getLevel() {  // Fixed: removed parameter
            return level;
        }
    };
    
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;  // Fixed: Added helmet member variable

public:
    int getHealth() {
        return health;
    }
    int getAge() {
        return age;
    }
    int getScore() {
        return score;
    }
    bool isAlive() {  // Fixed: return type should be bool
        return alive;
    }
    Gun getGun() {
        return gun;
    }
    
    void setHealth(int health) {
        this->health = health;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setScore(int score) {
        this->score = score;
    }
    void setIsAlive(bool alive) {
        this->alive = alive;
    }
    void setGun(Gun gun) {
        this->gun = gun;
    }

    void setHelmet(int level) {
        helmet.setLevel(level);  // Fixed: Use member variable directly
        int health = 0;
        if (level == 1) {
            health = 25;
        }
        else if (level == 2) {
            health = 50;
        }
        else if (level == 3) {
            health = 100;
        }
        else {
            cout << "Error, invalid level" << endl;
            return;
        }
        helmet.setHp(health);
    }
    
    Helmet getHelmet() {
        return helmet;
    }
};

int main() {
    Player deva;
    Player om;
    Player *laghav=new Player;

    Gun awm;
    awm.ammo = 10;
    awm.damage = 160;
    awm.scope = 8;

    deva.setAge(21);
    deva.setScore(100);
    deva.setIsAlive(true);
    deva.setHealth(70);
    deva.setGun(awm);
    deva.setHelmet(3);  // Added helmet for deva

    Gun akm;
    akm.ammo = 100;
    akm.damage = 60;
    akm.scope = 2;

    om.setAge(22);
    om.setScore(110);
    om.setIsAlive(true);
    om.setHealth(72);
    om.setGun(akm);
    om.setHelmet(2);  // Added helmet for om

    Player players[3]={deva,om,*laghav};
    cout<<players[0].getAge();
    return 0;
}
