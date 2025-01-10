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
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int length(Node* head){
    int l =0 ;
    Node* temp = head;
    while (temp!=NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
int intersection(Node* &head1, Node* &head2){
    int l1 = length(head1);
    int l2 = length(head2);

    int d = 0;
    Node* ptr1;
    Node* ptr2;
    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        ptr1 = head2;
        ptr2 = head1;
    }

    while(d){
        ptr1 = ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}
int main(){
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(4);
    head1->next->next->next->next = new Node(5);
    Node* head2 = new Node(6);
    head2->next = head1->next->next;

    cout<<"List 1: ";
    print(head1);
    cout<<"List 2: ";
    print(head2);

    int intersect_val = intersection(head1,head2);
    cout<<intersect_val;
}