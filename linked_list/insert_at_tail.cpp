#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
//insert at tail
void insertAtail(Node* &tail, int d){
    //create new node
    Node* node1 = new Node(d);
    tail->next = node1;
    tail = node1;
}
// traverse node
void print(Node* &head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // tail pointed to node1
    Node* tail = node1;
    // head pointed to node1 (head of the list)
    Node* head = node1;
    print(head);

    insertAtail(tail,21);
    print(head);

    insertAtail(tail,32);
    print(head);


    return 0;
}