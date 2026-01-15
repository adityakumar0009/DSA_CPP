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
Node* remove_nth_node(Node* head,int n){
    int length = get_length(head);
    if(n==length){
        Node* temp =head;
        head = head->next;
        delete temp;
        return head;
    }
    int travel_front = length-n;
    Node* temp = head;
    Node* prev = NULL;
    while(travel_front--){
        prev = temp;
        temp=temp->next;
    }
    prev->next = temp->next;
    delete temp;
    return head;
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
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    int n = 2;
    print(head);
    cout<<endl;
    Node* remove = remove_nth_node(head,n);
    print(remove);
    return 0;
}