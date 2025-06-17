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
Node* reverse_ll(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
};
void print_list(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    print_list(head);
    head = reverse_ll(head);
    print_list(head);
    return 0;
}