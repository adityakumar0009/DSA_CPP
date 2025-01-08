#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class doublyLL{
    public:
    Node* head;
    Node* tail;
    doublyLL(){
        head = tail = NULL;
    }

    void push_back(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    void pop_front(){
        if(head==NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head!=NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head==NULL){
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail!=NULL){
            tail->next = NULL;
        } 
        temp->prev = NULL;
        delete temp;
    }

    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp = temp->next;
        }
        cout<<"NULL";
    }
};
int main(){
    doublyLL dll;
    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);
    dll.print();
    cout<<endl;
    dll.pop_back();
    dll.print();
    return 0;
}