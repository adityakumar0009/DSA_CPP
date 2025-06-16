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
Node* remove_element(Node* head,int val){
    while(head!=NULL && head->data==val){
        Node* temp = head;
        head = head->next;
        delete(temp);
    }
    Node* curr = head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->next->data==val){
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}
void print_list(Node* head){
    Node* temp = head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    int val = 3;
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(6);
    print_list(head);
    head = remove_element(head, val);
    cout << "After deletion: ";
    print_list(head);
    return 0;
}