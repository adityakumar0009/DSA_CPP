#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void delete_node(Node* node){
    Node* prev = NULL;
    while(node!=NULL && node->next!=NULL){
        node->data = node->next->data;
        prev = node;
        node = node->next;
    }
    prev->next = NULL;
    delete(node);
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
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    cout << "Before deletion: ";
    printList(head);
    delete_node(head);
    cout << "After deletion:\n";
    printList(head);
    return 0;
}