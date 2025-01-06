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
class solution{
    public:
    Node* copyRandomList(Node* head){
        if(head==NULL){
            return NULL;
        }
        unordered_map<Node*,Node*>m;
        Node *oldTemp = head;
        Node* newhead = new Node(head->data);
        Node *newTemp = newhead;
        oldTemp = oldTemp->next;
        newTemp = newhead;
        m[head] = newhead;


        while(oldTemp!=NULL){
            Node* copyNode = new Node(oldTemp->data);
            m[oldTemp] = copyNode;
            newTemp->next = copyNode;
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }
        oldTemp = head;
        newTemp = newhead;
        while(oldTemp!=NULL){
            newTemp->random = m[oldTemp->random];
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }
        return newhead;
    }
};
int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->next = third;

    head->random=third;
    second->random=head;
    third->random=second;

    solution s;
    Node* copyList = s.copyRandomList(head);
    Node* temp = copyList;
    while(temp!=NULL){
        cout<<temp->data;
        if(temp->random){
            cout<<"random data "<<temp->random->data<<endl;;
        }
        else{
            cout<<"Null values";
        }
        temp = temp->next;
    }
    return 0;
}