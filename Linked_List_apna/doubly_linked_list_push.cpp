#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class doublyLL{
    public:
    Node* head;
    Node* tail;
    doublyLL(){
        head = NULL;
        tail = NULL;
    }
    void push_front(int val){
        Node* newnode = new Node(val);

        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }
    void push_back(int val){
        Node* newnode = new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    void print(){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"<=>";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    doublyLL dll;
    // dll.push_front(1);
    // dll.push_front(2);
    // dll.push_front(3);

    // dll.print();

    // cout<<endl;
    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);

    dll.print();
    return 0;
}