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
Node* detect_cycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    bool has_cycle = false;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            has_cycle=true;
            break;
        }
    }
    if(!has_cycle){
        return NULL;
    }
    slow=head;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
int main(){
    Node* head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(-4);
    head->next->next->next->next = head->next;
    Node* cycle_start = detect_cycle(head);
    if(cycle_start){
        cout<<"cycle of linked list begins from "<<cycle_start->data;
    }
    else{
        cout<<"No cycle detected "<<endl;
    }
    return 0;
}