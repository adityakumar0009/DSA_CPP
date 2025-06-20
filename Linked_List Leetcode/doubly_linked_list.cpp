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
    Node* head;
    Node* tail;
    public:
    doublyLL(){
        head= NULL;
        tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->prev=tail;
            tail->next =newNode;
            tail = newNode;
        }
    }
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "<=>";
            temp = temp->next;
        }
        cout << endl;
    }
    void pop_front(){
        if(head=NULL){
            cout<<"doubly LL is empty ";
            return ;
        }
        Node* temp = head;
        head = head->next;
        if(head!=NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        tail = NULL;
        delete temp;
    }
};
int main(){
    doublyLL dLL;
    // cout<<"push front is ";
    // dLL.push_front(1);
    // dLL.push_front(2);
    // dLL.push_front(3);
    // dLL.print();
    // cout<<"push back is ";
    dLL.push_back(1);
    dLL.push_back(2);
    dLL.push_back(3);
    dLL.pop_front();
    dLL.print();
    return 0;
}