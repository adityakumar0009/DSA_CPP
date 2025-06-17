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
Node* delete_node(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    while(fast!=NULL && fast->next!=NULL){
        prev = slow;
        slow=slow->next;
        fast = fast->next->next;
    }
    prev->next = slow->next;
    delete slow;
    return head;
}
void print_list(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    print_list(head);
    head = delete_node(head);
    print_list(head);
    return 0; 
}