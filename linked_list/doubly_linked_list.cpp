#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* pre;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->pre = NULL;
        this-> next = NULL;
    }
};
//traversing a linked list
void print(Node* head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
//length a linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while (temp!=NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
//insert at head
void insertAtHead(Node * &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->pre = temp;
    head = temp;
}
//insert at tail
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->pre = tail;
    tail = temp;
}
//insert at any position
void insertAtAnyPosition(Node* &tail,Node* &head,int position, int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==nullptr){
        insertAtTail(tail,d);
        return;
    }
    //creating a node to insert
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->pre = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->pre = temp;
}
int main(){
    Node* node1 = new Node(10);
    print(node1);
    Node* head = node1;
    Node* tail = node1;
    // cout<<"length->"<<getLength(head)<<endl;
    insertAtHead(head,3);
    print(head);
    insertAtTail(tail,6);
    print(head);
    insertAtAnyPosition(tail,head,1,10);
    print(head);
    return 0;
}