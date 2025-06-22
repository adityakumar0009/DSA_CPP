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
Node* reverse_node(Node* head,int k){
    int count = 0;
    Node* temp = head;
    // check if k nodes exist
    while(count<k){
        if(temp==NULL){
            return head;
        }
        temp = temp->next;
        count++;
    }
    //recurcively call
    Node* prevNode = reverse_node(temp,k);
    temp = head;
    count = 0;
    while(count<k){
        Node* next = temp->next;
        temp->next = prevNode;
        prevNode = temp;
        temp = next;
        count++;
    }
    return prevNode;
};
void print(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    cout<<"Node before reverese is ";
    int k = 2;
    print(head);
    head = reverse_node(head,k);
    cout<<"Node after reverse is ";
    print(head);
    return 0;
}