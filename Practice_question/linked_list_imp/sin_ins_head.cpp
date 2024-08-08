#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
void InsertAtaHead(Node* &head, int d){
    //create new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertAtTail(Node* &tail, int d){
    //create new node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void print(Node* &head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<endl;
    
}
int main(){
    //create new node
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(tail);
    InsertAtTail(tail,12);
    print(tail);
    InsertAtTail(tail,14);
    print(tail);
    return 0;
}