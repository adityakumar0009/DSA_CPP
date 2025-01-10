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

int length(Node* head){
    int l =0;
    Node* temp = head;
    while(temp!=NULL){
        l++;
        temp = temp->next;
    }
    return l;
}

Node* kmapped(Node* &head, int k){
    if(head==NULL){
        return NULL;
    }
    Node* newhead;
    Node* newtail;
    Node* tail = head;
    int count = 1;
    int l = length(head);
    k=k%l;
    while (tail->next!=NULL){
        if(count==l-k){
            newtail = tail;
        }
        if(count==l-k+1){
            newhead = tail;
        }
        tail = tail->next;
        count++;
    }
    newtail->next = NULL;
    tail->next = head;
    return newhead;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(1);
    head-> next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    cout<<"original list"<<" ";
    print(head);

    int k =3;
    head = kmapped(head,k);
    cout<<"rotated list ";
    print(head);
    return 0;
}