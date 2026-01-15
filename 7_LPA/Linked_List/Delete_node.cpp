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
void delete_node(Node* head){
    Node* prev = NULL;
    while(head!=NULL && head->next!=NULL){
        head->next = head->next->next;
        prev = head;
        head = head->next;
    }
    prev->next = NULL;
    delete head;
}
void print(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    cout<<"The node before deletion is ";
    print(head);
    cout<<endl;
    cout<<"The node after deleteion is ";
    delete_node(head);
    print(head);
    return 0;
}