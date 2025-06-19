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
Node* mergeList(Node* List1,int a,int b,Node* List2){
    Node* left = NULL;
    Node* right = List1;
    for(int i=0;i<=b; i++){
        if(i==a-1){
            left = right;
        }
        right = right->next;
    }
    left->next = List2;
    Node* temp = List2;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = right;
    return List1;
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
    Node* List1 = new Node(10);
    List1->next = new Node(1);
    List1->next->next = new Node(13);
    List1->next->next->next = new Node(20);
    int a = 1;
    int b = 2;
    print_list(List1);
    Node* List2 = new Node(15);
    List2->next = new Node(18);
    print_list(List2);
    cout<<"List after merge is ";
    mergeList(List1,a,b,List2);
    print_list(List1);
    return 0;
}