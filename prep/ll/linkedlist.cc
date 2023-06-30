#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* next;

    Node(int d) {
        value = d;
        next = NULL;
    }
    void insertAtHead(Node* &head, int d) {
    if(head == NULL) {
        head = new Node(d);
        return;
    }
    Node* n = new Node(d);
    n->next = head;
    head = n;
    return;
}
void print(Node* head) {
    while(head!= NULL) {
        cout<<head->value<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
    return;
}
    
};


int main() {
    Node* head = NULL;
    head->insertAtHead(head,4);
    head->insertAtHead(head,76);
    head->insertAtHead(head,7);
    head->insertAtHead(head,8);
    head->insertAtHead(head,12112334);
    head->print(head);
    head->print(head);
}
