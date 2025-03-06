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
class queue{
    Node* head;
    Node* tail;
    public:
    queue(){
        head=tail=NULL;
    }
    void push(int data){
        Node* newnode = new Node(data);
        if(empty()){
            head=tail=newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop(){
        if(empty()){
            cout<<"linked list is empty";
        }
        else{
            Node* temp  = head;
            head = head->next;
            delete temp;
        }
    }
    int front(){
        return head->data;
    }
    bool empty(){
        return head==NULL;
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(3);
    q.pop();
    cout<<"the front element of queue is -> "<<q.front();
    return 0;
}