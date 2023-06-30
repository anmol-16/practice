#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    int height;
    int age;
    int weight;
    int getAge() {
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class Male : public Human{
    public:
    string color;
    void sleep() {
        cout<<"Male is sleeping"<<endl;
    }
};
class A {
    public:
    void fun() {
        cout<<"Masti rukni nhi chahiye erg mein"<<endl;
    }
};
class B {
    public:
    void fun() {
        cout<<"Masti rukni nhi chahiye B mein"<<endl;
    }
};
class C : public A, public B {

};
int main() {
    Male m1;
    m1.setWeight(12);
    cout<<m1.weight<<endl;

    C obj;
    obj.A::fun();
    obj.B::fun();
}