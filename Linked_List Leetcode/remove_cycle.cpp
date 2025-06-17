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
Node* remove_cycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    bool is_cycle = false;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            is_cycle = true;
            break;;
        }
    }
    if(!is_cycle){
        return NULL;
    }
    slow = head;
    Node* prev = NULL;
    while(slow!=fast){
        slow = slow->next;
        prev = fast;
        fast = fast->next;
    }
    prev->next = NULL;
    return slow;
}
int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = head->next; // Create a cycle

    Node *start = remove_cycle(head);
    if (start)
        cout << "Cycle removed. Cycle started at node with data: " << start->data << endl;
    else
        cout << "No cycle detected." << endl;
    return 0;
}