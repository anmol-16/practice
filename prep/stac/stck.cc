#include<bits/stdc++.h>
using namespace std;

class Stack{
    vector<int> arr;
    public:
    void push(int d) {
        arr.push_back(d);
        return;
    }
    bool isEmpty() {
        return arr.size() == 0;
    }
    void pop() {
        if(!isEmpty()){
            arr.pop_back();
        }
        return;
    }

    int top() {
        return arr[arr.size() - 1];
    }
    
    
};

void reverse(Stack& s1) {
    Stack s2;

    if(s1.isEmpty())
        return;
    
}

int main() {
    Stack s1;
    s1.push(8);
    s1.push(3);
    s1.push(5);
    s1.push(211);
    s1.push(12);

    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.top()<<endl;
}