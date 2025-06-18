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
Node* odd_even(Node* head){
    Node* odd = head;
    Node* even = head->next;
    Node* startEven = head->next;
    while(even!=NULL && even->next!=NULL){
        odd->next = even->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;
    }
    odd->next = startEven;
    return head;
}
void Print_list(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    Print_list(head);
    odd_even(head);
    cout<<"odd and even list is ";
    Print_list(head);
    return 0;
}