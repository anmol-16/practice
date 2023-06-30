#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node(int d) {
        value = d;
        next = NULL;

    }
};

void insert(Node*&head, int data) {
    Node* n = new Node(data);
    n->next = head;
    Node* temp = head;
    if(temp != NULL) {
        while(temp->next!=head) {
            temp = temp->next;
        }
        temp->next = n;
    }
    else{
        n->next = n;
    }

    head = n;
    return;
        
}

Node* getNode(Node* head, int data) {
    Node* temp = head;
    //for all nodes except the last node
    while(temp->next != head) {
        if(temp->value == data) {
            return temp;
        }
        temp = temp->next;
    }
    //checking the last node value
    if(temp->value == data) 
        return temp;
    return NULL;
}

void deletion(Node*&head, int data) {
    Node* del = getNode(head, data);

    if(del== NULL)
        return;
    Node* temp = head;
    if(head == del) {
        head = head->next;
    }
    while(temp->next != del) {
        temp = temp->next;
    }
    temp->next = del->next;
    delete del;

    return;
}

void print(Node* head) {
    Node* temp = head;
    while(temp->next != head) {
        cout<<temp->value<<"->";
        temp = temp->next;
    }
    cout<<temp->value<<"->";
    cout<<"NULL"<<endl;
    return;
}

int main() {
    Node* head = NULL;
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    print(head);

    return 0;
}