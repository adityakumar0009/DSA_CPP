#include<iostream>
#include<algorithm>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data =val;
        next = NULL;
    }
};
Node* insert_gcd(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* temp = insert_gcd(head->next);
    Node* gcdNode = new Node(__gcd(head->data,head->next->data));
    gcdNode->next = temp;
    head->next = gcdNode;
    return head;
}
void print_list(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(18);
    head->next = new Node(6);
    head->next->next = new Node(10);
    head->next->next->next = new Node(3);
    print_list(head);
    insert_gcd(head);
    cout<<"Node after gcd insertion is ";
    print_list(head);
    return 0;
}