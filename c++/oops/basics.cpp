#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

class Player{
    public://access modifiers
    int age;
    void showInfo(){//member function
        cout<<"Info Shown"<<endl;
    }
    void showInfoAgain(){
        cout<<"Info Shown Again"<<endl;
    }
    private://access modifiers
    int health;
};

int main(){

    Player deva;
    deva.age=18;
    // deva.health=98; 
    // cout<<deva.health<<endl;
    cout<<deva.age<<endl;
    cout<<endl;
    Player klrahul;
    klrahul.age=89;
    // klrahul.health=14; 
    // cout<<klrahul.health<<endl;
    cout<<klrahul.age<<endl;


     deva.showInfo();
     deva.showInfoAgain();
}
