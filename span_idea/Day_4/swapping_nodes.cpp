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
int find_length(Node* head){
    int l = 0;
    while(head!=NULL){
        l++;
        head=head->next;
    }
    return l;
}
Node* swap_node(Node* head,int k){
    int L = find_length(head);
    Node* node1 = head;
    int k1 = k;
    while(k1>1){
        node1 =  node1->next;
        k1--;
    }
    int k2 = L-k+1;
    Node* node2 = head;
    while(k2>1){
        node2=node2->next;
        k2--;
    }
    swap(node1->data,node2->data);
    return head;
}
void print_lin_list(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    print_lin_list(head);
    cout<<"after swapping number become "<<endl;
    int k = 2;
    Node* swap = swap_node(head,k);
    print_lin_list(swap);
    return 0;
}