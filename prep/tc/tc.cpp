#include<bits/stdc++.h>
// using namespace std;

int main() {
    time_t start = clock();
    std::cout<<start<<std::endl;
    std::vector<int> myVector;
    myVector.reserve(200000000);

    for (int i = 0; i < 200000000; i++) {
        int randomNumber = std::rand(); // Generate a random number
        myVector.push_back(randomNumber);
    }
    time_t end = clock();

    std::cout<<(end - start)<<std::endl;
}