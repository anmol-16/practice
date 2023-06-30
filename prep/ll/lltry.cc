#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int d)
    {
        value = d;
        next = NULL;
    }
};
void insertAtHead(Node *&head, int d)
{
    if (head == NULL)
    {
        head = new Node(d);
        return;
    }
    Node *n = new Node(d);
    n->next = head;
    head = n;
    return;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
    return;
}

void insertAtTail(Node*& head, int data) {
    if(head == NULL) {
        head = new Node(data);
        return;
    }
    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new Node(data);
    return;
}

int length(Node* head) {
    int cnt = 0;
    while(head) {
        cnt++;
        head = head->next;
    }
    return cnt;
}

void insertMiddle(Node*& head, int p, int d) {
    if(head == NULL or p == 0) {
        insertAtHead(head, d);
        return;
    }
    else if(p > length(head)) {
        insertAtTail(head, d);
        return;
    }
    Node* temp = head;
    while(p - 1 > 0){
        temp = temp->next;
        p--;
    }
    Node* n = new Node(d);
    n->next = temp->next;
    temp->next = n;
    return;
}

void deleteHead(Node*& head) {
    if(head == nullptr) 
        return;
    Node* temp = head -> next;
    delete head;
    head = temp;
}

int search(Node* head, int val) {
    Node* temp = head;
    int i = 0;
    while(temp) {
        if(temp->value == val) {
            return i;
        }
        i++;
        temp = temp->next;
    }
    return -1;
}
// recursive

bool searching(Node* head, int val) {
    if(head == NULL) {
        return false;
    }

    if(head->value == val) {
        return true;
    }
    return searching(head->next, val);
}

void takeInput(Node*& head, int val) {
    return;
}
Node* takeInput2() {
    int d;
    cin>>d;
    Node* head = NULL;
    while(d!=-1) {
        insertAtHead(head, d);
        cin>>d;
    }
    return head;
}
Node* input() {
    int d;
    Node* head = NULL;
    while(cin>>d) {
        insertAtHead(head, d);
    }
    return head;
}

ostream& operator <<(ostream &os, Node* head){
    print(head);
    return os;
}

istream& operator >> (istream& istream1, Node*&head) {
    head = takeInput2();
    return istream1;
}

// reverse linked list
void reverseIterative(Node*&head) {
    if(head == NULL)
        return;
    
    Node* prev = NULL;
    Node* curr = head;
    while(curr) {
        Node* n = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = n;
    }
    head = prev;
    return;
}

Node* reverseRec(Node* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }

    Node* newHead = reverseRec(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

Node* midpoint(Node* head) {
    if(head == NULL or head->next == NULL)
        return head;

    Node* fast = head->next;
    Node*slow = head;

    while(fast!=NULL and fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* kthNode(Node* head, int k) {
    //using fast and slow pointers we will make "fast" jump k times
    //and then we will increment slow pointer by one and fast pointer by also 1
    //till the end of the linked list
    Node* fast = head;
    Node* slow = head;
    while(k--) {
        fast = fast->next;
    }

    while(fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    return slow;
}

Node* merge2SortedLL(Node* h1, Node* h2) {
    if(h1 == NULL)
        return h2;
    if(h2 == NULL)
        return h1;
    Node* c;
    if(h1->value <= h2->value) {
        c = h1;
        c->next = merge2SortedLL(h1->next, h2);
    }
    else{
        c = h2;
        c->next = merge2SortedLL(h1, h2->next);
    }
    return c;
}

Node* mergeSort(Node* head) {
    if(head == NULL or head->next == NULL) {
        return head;
    }
    Node* mid = midpoint(head);
    Node* a = head;
    Node* b = mid->next;
    mid->next = NULL;

    a = mergeSort(a);
    b = mergeSort(b);

    Node* ans = merge2SortedLL(a, b);

    return ans;
}

bool detectCycle(Node* head) {
    if(head == NULL || head->next == NULL) {
        return false;
    }
    Node* fast = head;
    Node* slow = head;

    while(fast!=NULL and fast->next!=NULL) {
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow)
            return true;
    }
    return false;
}

Node* removeCycle(Node* head) {
    if(head == NULL || head->next == NULL) {
        return false;
    }
    Node* fast = head;
    Node* slow = head;

    while(fast!=NULL and fast->next!=NULL) {
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow) {
            Node* prev = NULL;
            while(fast != slow) {
                fast = fast->next;
                prev = slow;
                slow = slow->next;
            }
            prev->next = NULL;
            break;
        }
            
    }
    return head;

}

int main()
{
    // Node *head;
    // cin>> head;
    // reverseIterative(head);
    // Node* ans = reverseRec(head);
    // cout<<head;

    // Node* mid = midpoint(head);
    // cout<<mid->value<<endl;
    //we can't do cout<<head1<<head2;
    //for that when overloading we need to return the type cout<<head type beacuse
    // (cout<<head1) << head2; will be called like this, 
    //cascading of the operator



    // merge 2 sorted
    // Node* h1, *h2;
    // cin>> h1 >> h2;

    // Node* c = merge2SortedLL(h1, h2);
    // cout<<c;

    Node* h1;
    cin>> h1;

    Node* ans = mergeSort(h1);
    cout<< ans;











    // insertAtHead(head, 4);
    // insertAtHead(head, 4);
    // insertAtHead(head, 76);
    // insertAtHead(head, 7);
    // insertAtHead(head, 8);
    // insertAtHead(head, 12112334);
    // insertMiddle(head,4,13232);
    // print(head);
    // insertMiddle(head,100,3242);
    // deleteHead(head);
    // print(head);
    // insertMiddle(head,100,3242);
    // print(head);
    // int ans = search(head, 7);
    // cout<<ans<<endl;
    // print(head);
    // cout<<endl;
    // bool ansRec = searching(head, 7);
    // cout<<ansRec<<endl;
    return 0;
}
