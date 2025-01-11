#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void even_after_odd(Node* head){
    if(head==NULL || head->next==NULL){
        return;
    }
    Node* odd = head;
    Node* even = head->next;
    Node* evenstart = even;
    while (odd!=NULL && even!=NULL && even->next!=NULL)
    {
        odd->next =even->next;
        odd=odd->next;
        even->next =odd->next;
        even=even->next;
    }
    odd->next = evenstart;
    if(odd!=NULL){
        even->next=NULL;
    }
}

void print(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main(){

    Node* newnode = new Node(1);
    newnode->next = new Node(2);
    newnode->next->next = new Node(3);
    newnode->next->next->next = new Node(4);
    newnode->next->next->next->next = new Node(5);
    newnode->next->next->next->next->next = new Node(6);
    print(newnode);
    cout<<endl;
    even_after_odd(newnode);
    print(newnode);
    return 0;
}