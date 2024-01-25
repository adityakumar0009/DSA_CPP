#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int n){
        this->data=data;
        this->next=NULL;
    }
};
int main(){
    Node* n1 = new Node(10);
    cout<< n1 ->data<<endl;
    cout<< n1 ->next<<endl;

    return 0;
}
//linked list : collection of nodes which is linear data structure.
//node containn data and address of another node.
//why : array doesnot change during runntime.
//linked list is dynamic data structure.
//insretion and deletion is easy in linkeed list.
//types of linkeed list : 1> singly linked list , 2> doubly linked list, 3> circular linked list, 4> circular doubly linked list