#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

class Player{
    private://access modifiers
    int age;
    int health;
    public:
    //setter
    void setAge(int a){
        age=a;
    }
    void setHealth(int h){
        health=h;
    }
    //getter
    int getAge(){
        return age;
    }
    int getHealth(){
        return health;
    }
};
using namespace std;

int main(){

    Player deva;
    deva.setAge(19);
    cout<<deva.getAge()<<endl;
    
}
