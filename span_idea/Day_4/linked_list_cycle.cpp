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
bool linked_list_cycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
void print_lin_list(Node* head){
    Node* curr = head;
    int count = 0;
    while(curr!=NULL && count<15){
        cout<<curr->data<<" ";
        curr=curr->next;
        count++;
    }   
    cout<<endl;
}
int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = head->next; // Create a cycle
    print_lin_list(head);
    if(linked_list_cycle(head)){
        cout<<"Linked list has cycle "<<endl;
    }
    else{
        cout<<"Linked list has not cycle "<<endl;
    }
    return 0;
}