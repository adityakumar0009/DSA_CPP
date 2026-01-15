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
Node* merge_list(Node* head1,Node* head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    if(head1->data<=head2->data){
        head1->next = merge_list(head1->next,head2);
    }
    else{
        head2->next = merge_list(head1,head2->next);
    }
}
void print_list(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
int main(){
    Node *head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(5);

    Node *head2 = new Node(3);
    head2->next = new Node(4);

    Node *mergedHead = merge_list(head1, head2);
    print_list(mergedHead);
    return 0;
}