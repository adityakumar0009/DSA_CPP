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
int get_length(Node* head){
    int length = 0;
    while(head!=NULL){
        length++;
        head=head->next;
    }
    return length;
}
Node* remove_end(Node* head,int n){
    int length = get_length(head);
    if(n==length){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    int get_length = length - n;
    while(get_length--){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    delete temp;
    return head;
};
void print_list(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    int n = 2;
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    print_list(head);
    cout<<"after removing element from last the head become ";
    head = remove_end(head,n);
    print_list(head);
    return 0;
}