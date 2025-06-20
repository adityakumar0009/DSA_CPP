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
Node* remove_element(Node* head){
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *nextNode = remove_element(head->next);
    if(head->data < nextNode->data){
        return nextNode;
    }
    head->next = nextNode;
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(5);
    head->next = new Node(2);
    head->next->next = new Node(13);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(8);
    cout<<"before removing node is ";
    print(head);
    cout<<"after removing node is ";
    head = remove_element(head);
    print(head);
    return 0;
}