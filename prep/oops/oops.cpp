#include <iostream>
#include <string>
using namespace std;

class Car {
    string model;
    int price;
    string name;

public:
    Car(string model, int price, string name) {
        this->model = model;
        this->name = name;
        this->price = price;
    }

    string getDetails() {
        return model + " " + name + " price: " + to_string(price);
    }
};

int main() {
    Car A("Range Rover Sports", 200000, "Land Rover");

    cout << A.getDetails() << endl;

    return 0;
}
