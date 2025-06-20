#include<iostream>
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
Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node* add_two_number(Node* L1, Node* L2){
    L1 = reverse(L1);
    L2 = reverse(L2);
    int sum =0;
    int carry = 0;
    Node* ans = new Node();
    while(L1!=NULL || L2!=NULL){
        if(L1!=NULL){
            sum+=L1->data;
            L1=L1->next;
        }
        if(L2!=NULL){
            sum+=L2->data;
            L2=L2->next;
        }
        ans->data = sum%10;
        carry = sum/10;
        Node* newNode = new Node(carry);
        newNode->next = ans;
        ans = newNode;
        sum = carry;
    }
    if(carry==0){
        return ans->next;
    }
    else{
        return ans;
    }
}
void print(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}
int main(){
    Node* L1 = new Node(2);
    L1->next = new Node(4);
    L1->next->next = new Node(3);

   
    Node* L2 = new Node(5);
    L2->next = new Node(6);
    L2->next->next = new Node(4);

    Node* result = add_two_number(L1, L2);
    print(result);
    return 0;
}