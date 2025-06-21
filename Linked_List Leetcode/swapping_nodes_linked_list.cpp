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
        head = head->next;
    }
    return l;
}
Node* swap_node(Node* head,int k){
    int L = find_length(head);
    Node* node1 = head;
    int k1 = k;
    while(k1>1){
        node1=node1->next;
        k1--;
    }
    Node* node2 = head;
    int k2 = L-k+1;
    while(k2>1){
        node2 = node2->next;
        k2--;
    }
    swap(node1->data,node2->data);
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
    int k = 2;
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    cout<<"The node value before swapping is ";
    print(head);
    head = swap_node(head,k);
    cout<<"The node value after swapping is ";
    print(head);
    return 0;
}