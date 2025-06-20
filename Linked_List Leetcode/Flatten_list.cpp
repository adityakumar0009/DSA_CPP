#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node* child;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
        child = NULL;
    }
};
Node* flatten(Node* head){
    if(head==NULL){
        return head;
    }
    Node* curr = head;
    while(curr!=NULL){
        if(curr->child!=NULL){
            Node* next = curr->next;
            curr->next = flatten(curr->child);
            curr->next->prev = curr;
            curr->child = NULL;
            // find tail
            while(curr->next!=NULL){
                curr=curr->next;
            }
            // attch tail with next pointer
            if(next!=NULL){
                curr->next = next;
                next->prev = curr;
            }
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}
void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(6);
    Node *n7 = new Node(7);
    Node *n8 = new Node(8);

    n1->next = n2;
    n2->prev = n1;
    n2->next = n3;
    n3->prev = n2;
    n3->next = n4;
    n4->prev = n3;
    n4->next = n5;
    n5->prev = n4;

    n3->child = n6;
    n6->next = n7;
    n7->prev = n6;
    n7->child = n8;

    cout << "Original Flattened List: " << endl;
    Node *head = n1;
    head = flatten(head);
    printList(head);
    return 0;
}