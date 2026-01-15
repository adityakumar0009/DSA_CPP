#include<iostream>
#include<unordered_map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* random;
    Node(int val){
        data = val;
        next = NULL;
        random = NULL;
    }
};
Node* copy_list(Node* head){
    if(head==NULL){
        return NULL;
    }
    unordered_map<Node*,Node*> m;
    Node* new_head = new Node(head->data);
    Node* old_temp = head->next;
    Node* new_temp = new_head;
    m[head] = new_head;
    while(old_temp!=NULL){
        Node* copy_node = new Node(old_temp->data);
        m[old_temp] = copy_node;
        new_temp->next = copy_node;
        old_temp = old_temp->next;
        new_temp = new_temp->next;
    }
    old_temp = head;
    new_temp = new_head;
    while(old_temp!=NULL){
        new_temp->random = m[old_temp->random];
        old_temp = old_temp->next;
        new_temp = new_temp->next;
    }
    return new_head;
}
int main(){
    return 0;
}