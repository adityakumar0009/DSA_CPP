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
class Solution{
    public:
    Node* copyrandomList(Node* head){
        if(head==NULL){
            return NULL;
        }
        unordered_map<Node*,Node*>m;
        Node* newhead = new Node(head->data);
        Node* oldtemp = head->next;
        Node* newtemp = newhead;
        m[head] = newhead;
        while(oldtemp!=NULL){
            Node* copyNode = new Node(oldtemp->data);
            m[oldtemp] = copyNode;
            newtemp->next = copyNode;
            oldtemp = oldtemp->next;
            newtemp = newtemp->next;
        }
        oldtemp = head;
        newtemp = newhead;
        while(oldtemp!=NULL){
            newtemp->random = m[oldtemp->random];
            oldtemp = oldtemp->next;
            newtemp = newtemp->next;
        }
        return newhead;
    }
};
void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        if (temp->random)
            cout << ", Random: " << temp->random->data;
        else
            cout << ", Random: NULL";
        cout << endl;
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    head->random = head->next->next;
    head->next->random = head;

    Solution sol;
    Node *copiedList = sol.copyrandomList(head);
    cout << "Original List:\n";
    printList(head);
    cout << "Copied List:\n";
    printList(copiedList);
    return 0;
}