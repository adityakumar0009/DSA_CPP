#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int v){
        data = v;
        next = NULL;
    }
};
//insert at head
void insertAtHead(node* &head, int v){
    node* n = new node(v);
    n->next = head;
    head = n;
}
//insert at tail
void insertAtTail(node* &head,int v){
    node* n = new node(v);
    if(head==NULL){
        head = n;
        return;
    }
    node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
//print
void display(node* head){
    node* temp = head;
    while (temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    
}
//searching
bool search(node* head,int key){
    node*temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,4);
    display(head);
    cout<<search(head,5);
    return 0;
}