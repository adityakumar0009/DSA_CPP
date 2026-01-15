#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtaHead(Node* &head, int d) {
    // Create new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d) {
    // Create new node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtmiddle(Node* &tail, Node* &head, int position, int n) {
    if(position == 1) {
        InsertAtaHead(head, n);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while (cnt < position - 1 && temp->next != NULL) {
        temp = temp->next;
        cnt++;
    }

    // If we reached the end, insert at tail
    if(temp->next == NULL) {
        InsertAtTail(tail, n);
        return;
    }

    // Create a new node and insert it in the middle
    Node* node_to_insert = new Node(n);
    node_to_insert->next = temp->next;
    temp->next = node_to_insert;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create the first node
    Node* node1 = new Node(10);

    // Head and tail point to the first node
    Node* head = node1;
    Node* tail = node1;

    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 14);
    print(head);

    InsertAtmiddle(tail, head, 4, 45);
    print(head);

    return 0;
}
