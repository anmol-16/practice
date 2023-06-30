#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
    int b;
    public:
    //same name functions ccan be there but parameters should be different
    void sayHello() {
        cout<<"Hello Anmol Aggarwal"<<endl;
    }
    void sayHello(string name) {
        cout<<"Hello" <<name<<" "<<endl;
    }
    void operator+ (A &obj) {
        cout<<this->a - obj.a<<endl;
    }
};

class Animal {
    public:
    int age;
    void speak() {
        cout<<"speaking"<<endl;
    }
};
class Dog : public Animal {
    public:
    int weight;
    void speak() {
        cout<< " Barking"<<endl;
    }
};

int main() { 
    A obj;
    obj.sayHello();
    obj.a = 10;
    A obj2;
    obj2.a = 100;
    obj2 + obj;



    Dog d1;
    d1.speak();
}