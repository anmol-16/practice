#include<bits/stdc++.h>
using namespace std;

class Hero {
    int health;
    string name;
    public:
    Hero(int health, string name) {
        this->health = health;
        this->name = name;
    }
    //customised copy constructor
    Hero(Hero& temp) {
        this->health = temp.health;
        this->name = temp.name;
    }
    void print() {
        cout<<this->health<<endl;
        cout<<this->name<<endl;
    }
};

int main(){
    Hero h(60, "Shaktiman");
    Hero a(h);
    a.print();
    cout<<"Size of h   "<<sizeof(h)<<endl;
}