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
    bool is_cycle = false;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            is_cycle = true;
            break;
        }
    }
    if(!is_cycle){
        return NULL;
    }
    slow = head;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
int main(){
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = second; // Creating a cycle (back to second)

    Node *cycle_start = detect_cycle(head);
    if (cycle_start)
    {
        cout << "Cycle detected at node with value: " << cycle_start->data << endl;
    }
    else
    {
        cout << "No cycle detected." << endl;
    }

    return 0;
}