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
class circularList{
    Node* head;
    Node* tail;
    public:
    circularList(){
        head = tail =NULL;
    }

    void insertAthead(int val){
        Node* newNode = new Node(val);
        if(tail==NULL){
            head=tail=newNode;
            tail->next = head;
        }
        else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void insertAttail(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
            tail->next = head;
        }
        else{
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }
    void print(){
        if(head==NULL){
            return;
        }
        cout<<head->data<<"->";
        Node* temp = head->next;
        while (temp!=head)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }

};
int main(){
    circularList cll;
    // cll.insertAthead(1);
    // cll.insertAthead(2);
    // cll.insertAthead(3);
    // cll.print();

    // cout<<endl;

    cll.insertAttail(1);
    cll.insertAttail(2);
    cll.insertAttail(3);
    cll.print();
    return 0;
}