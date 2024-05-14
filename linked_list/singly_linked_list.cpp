#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};
void insertAtNode(Node* &head,int d){
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    Node* temp = head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtPosition(Node* &head, int position, int d){
    Node* temp = head;
    if(position==1){
        insertAtNode(head,d);
        return;
    }
    int count = 1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    //crfeating a node to insert
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next=nodeToInsert;
}
int main(){
    Node* node1 = new Node(10);
    //cout<< node1 ->data<<endl;
    //cout<< node1 ->next<<endl;
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtPosition(head,1,5);
    print(head);
    return 0;
}