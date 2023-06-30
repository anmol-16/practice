#include<bits/stdc++.h>
using namespace std;

class Queue{
    int cs;
    list<int> l; // doubly linked list, we can use forward_list for singly list
    public:
    Queue() {
        cs = 0;
    }

    bool isEmpty() {
        return cs == 0;
    }

    void push(int data) {
        l.push_back(data);
        cs++;
        return;
    }
    void pop() {
        if(!isEmpty()) {
            cs--;
            l.pop_front();
        }
    }

    int front() {
        return l.front();
    }
};

int main() {
    // Queue q;
    // for(int i=1;i<=10;i++) {
    //     q.push(i);
    // }
    // while(!q.isEmpty()) {
    //     std::cout<<q.front()<<" ";
    //     q.pop();
    // }

    // queue<int> q;
    // for(int i=1;i<=5;i++) {
    //     q.push(i);
    // }

    // while(!q.empty()) {
    //     std::cout<< q.front() <<"<-";
    //     q.pop();
    // }

    Queue* l = new Queue();

    l->push(10);
    l->push(20);
    l->push(30);
    l->pop();
    while(!l->isEmpty()) {
        std::cout<<l->front()<<" ";
        l->pop();
    }
    

    return 0;
}