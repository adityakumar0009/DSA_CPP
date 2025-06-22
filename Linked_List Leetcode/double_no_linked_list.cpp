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
Node* reverse(Node* head){
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
}
Node* double_list(Node* head){
    head = reverse(head);
    Node* curr = head;
    Node* prev = NULL;
    int carry = 0;
    while(curr!=NULL){
        int newValue = curr->data*2+carry;
        curr->data=newValue%10;
        if(newValue>=10){
            carry = 1;
        }
        else{
            carry = 0;
        }
        prev = curr;
        curr = curr->next;
    }
    if(carry!=0){
        Node* newHead = new Node(carry);
        prev->next = newHead;
    }
    return reverse(head);
}
void print(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(8);
    head->next->next = new Node(9);
    cout<<"Linked List before double it is ";
    print(head);
    cout<<"Linked List after double it is ";
    head = double_list(head);
    print(head);
    return 0;
}