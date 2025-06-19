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
Node* copyRandom(Node* head){
    if(head==NULL){
        return NULL;
    }
    unordered_map<Node*,Node*> m;
    Node* newhead = new Node(head->data);
    m[head] = newhead;
    Node* oldTemp = head->next;
    Node* newTemp = newhead;
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
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "Data: " << temp->data;
        if (temp->random)
            cout << ", Random: " << temp->random->data << endl;
        else
            cout << ", Random: NULL" << endl;
        temp = temp->next;
    }
}

int main(){
    Node *A = new Node(1);
    Node *B = new Node(2);
    Node *C = new Node(3);
    Node *D = new Node(4);
    // Setting next pointers
    A->next = B;
    B->next = C;
    C->next = D;
    // Setting random pointers
    A->random = C; // 1 → 3
    B->random = A; // 2 → 1
    C->random = D; // 3 → 4
    D->random = B; // 4 → 2
    cout << "Original List:\n";
    printList(A);
    Node *copiedList = copyRandom(A);
    cout << "\nCopied List:\n";
    printList(copiedList);

    return 0;
}