#include <iostream>
using namespace std;
class Player{
private:
    int health;
    int age;
    int score;
    bool alive;
public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int isAlive(){
        return alive;
    }
    void setHealth(int health){
        this->health=health;
    }
    void setAge(int age){
        this->age=age;
    }
    void setScore(int score){
        this->score=score;
    }
    void setIsAlive(bool alive){
        this->alive=alive;
    }
};

int addScore(Player a,Player b){
    return a.getScore()+b.getScore();
}

Player getMaxScorePlayer(Player a,Player b){
    if(a.getScore()>b.getScore()) return a;
    else return b;
}
int main() {
    Player deva;//static allocation (compile time)
    Player om;

    Player *laghav=new Player;//dynamic allocation(run time)
    // Player laghavObj=*laghav;
    deva.setAge(21);
    deva.setScore(100);
    deva.setIsAlive(true);
    deva.setHealth(70);
    
    om.setAge(22);
    om.setScore(110);
    om.setIsAlive(true);
    om.setHealth(72);
    
    // laghavObj.setScore(23);
    // laghavObj.setHealth(53);

    laghav->setHealth(20);
    laghav->setScore(60);

    cout<<addScore(deva,om)<<endl;
    Player sanket=getMaxScorePlayer(deva,om);
    cout<<sanket.getScore()<<endl;
    cout<<sanket.getHealth()<<endl;
}
