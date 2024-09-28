#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
    }    
};
void insertAtHead(Node* &head,int d){
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
}
void print(Node* head){    
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
} 
int main(){
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* head = n1;
    head->next = n2;
    n2->next = n3;
    n3->next = NULL;
    //traverse
    insertAtHead(head,5);
    print(head);
    return 0;
}