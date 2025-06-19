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
Node* mergerNode(Node* head){
    Node* p1 = head->next;
    Node* p2 = head->next;
    while(p2!=NULL){
        int sum = 0;
        while(p2!=NULL && p2->data!=0){
            sum+=p2->data;
            p2 = p2->next;
        }
        p1->data = sum;
        p2=p2->next;
        p1->next = p2;
        p1=p1->next;
    }
    return head->next;
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
    Node *head = new Node(0);
    head->next = new Node(3);
    head->next->next = new Node(1);
    head->next->next->next = new Node(0);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = new Node(5);
    head->next->next->next->next->next->next = new Node(2);
    head->next->next->next->next->next->next->next = new Node(0);

    Node *merged = mergerNode(head);
    Print_list(merged);

    return 0;
}