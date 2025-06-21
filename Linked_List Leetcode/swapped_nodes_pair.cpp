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
Node* swap_pair(Node* head){
    if(head==NULL && head->next==NULL){
        return head;
    }
    Node* first = head;
    Node* second = head->next;
    Node* prev = NULL;
    while(first!=NULL && second!=NULL){
        Node* third = second->next;
        second->next = first;
        first->next = third;
        if(prev!=NULL){
            prev->next = second;
        }
        else{
            head = second;
        }
        //update
        prev = first;
        first = third;
        if(third!=NULL){
            second = third->next;
        }
        else{
            second = NULL;
        }
    }
    return head;
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
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    cout<<"Node before swapping is ";
    print(head);
    cout<<"Node after swapping is ";
    head = swap_pair(head);
    cout<<"Node after swapping is ";
    print(head);
    return 0;
}