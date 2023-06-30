#include<bits/stdc++.h>
using namespace std;

class Stack{
    std::queue<int>q1;
    std::queue<int>q2;
    public:
    bool empty() {
        return q1.empty();
    }
    void push(int data) {
        q1.push(data);
        return;
    }
    void pop() {
        int n = q1.size();
        while(n>1) {
            q2.push(q1.front());
            q1.pop();
            n--;
        }
        q1.pop();
        swap(q1,q2);
        while(!q2.empty()) {
            q2.pop();
        }
        return;
    }
    int top() {
        int n = q1.size();
        while(n>1) {
            q2.push(q1.front());
            q1.pop();
            n--;
        }
        int lastElement = q1.front();
        q2.push(q1.front());
        q1.pop();
        
        swap(q1,q2);
        while(!q2.empty()) {
            q2.pop();
        }
        return lastElement;
    }
};

int main() {
    Stack s1;
    for(int i=0;i<=10;i++) {
        s1.push(i);
    }

    s1.pop();
    s1.pop();
    s1.pop();
    std::cout<< s1.top()<<" ";
    s1.pop();
    s1.pop();
    s1.pop();
    std::cout<< s1.top()<<" ";
    s1.pop();
    s1.pop();
    s1.pop();
    std::cout<< s1.top()<<" ";
}