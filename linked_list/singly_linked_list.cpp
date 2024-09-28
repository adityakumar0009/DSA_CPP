#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }

    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for data "<<value<<endl;
    }
};
void insertAtNode(Node* &head,int d){
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    Node* temp = head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtPosition(Node* &tail,Node* &head, int position, int d){
    Node* temp = head;
    if(position==1){
        insertAtNode(head,d);
        return;
    }
    int count = 1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==nullptr){
        insertAtTail(tail,d);
        return;
    }
    //crfeating a node to insert
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next=nodeToInsert;
}
void deleteNode(int position, Node* &head){
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* pre = NULL;
        int count = 1;
        while (count<position)
        {
            pre = curr;
            curr = curr->next;
            count ++;
        }
        pre->next = curr->next;
        curr -> next =  NULL;
        delete curr;
    }
}
int main(){
    Node* node1 = new Node(10);
    //cout<< node1 ->data<<endl;
    //cout<< node1 ->next<<endl;
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtPosition(tail,head,1,5);
    print(head);
    cout<<"head->"<<head->data<<endl;
    cout<<"tail->"<<tail->data<<endl;

    deleteNode(1,head);
    print(head);
    return 0;
}