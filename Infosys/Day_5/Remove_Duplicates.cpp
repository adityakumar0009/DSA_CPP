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
Node* remove_duplicates(Node* head){
    Node* curr = head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data == curr->next->data){
            curr->next = curr->next->next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}
void print_ln(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(1);
    print_ln(head1);
    head1 = remove_duplicates(head1);
    print_ln(head1);
    return 0;
}