#include<bits/stdc++.h>
using namespace std;


template<typename T>
class Stack{
    vector<T> arr;
    public:
    void push(T data) {
        arr.push_back(data);
    }
    bool isEmpty() {
        return arr.size() == 0;
    }
    void pop() {
        if(!isEmpty()) 
            arr.pop_back();
        return;
    }
    T top() {
        if(!isEmpty())
            return arr[arr.size() - 1];
    }

};

int main() {
    Stack<int> s1;

    s1.push(8);
    s1.push(3);
    s1.push(5);
    s1.push(211);
    s1.push(12);

    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
}