#include<iostream>
using namespace std;
class Listnode{
    public:
    int data;
    Listnode* next;
    Listnode(int val){
        data = val;
        next = NULL;
    }
};
Listnode* rev_node(Listnode* head, int k){
    Listnode* temp = head;
    int count = 0;
    while(count<k){
        if(temp==NULL){
            return head;
        }
        temp=temp->next;
        count++;
    }
    //recurcively call next
    Listnode* prevNode = rev_node(temp,k);
    temp = head;
    count = 0;
    while(count<k){
        Listnode* next = temp->next;
        temp->next = prevNode;
        prevNode = temp;
        temp = next;
        count++;
    }
    return prevNode;
}

void printList(Listnode* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Listnode* head = new Listnode(1);
    head->next = new Listnode(2);
    head->next->next = new Listnode(3);
    head->next->next->next = new Listnode(4);
    head->next->next->next->next = new Listnode(5);
    cout<<"original list-"<<" ";
    printList(head);
    int k = 2;
    head = rev_node(head,k);
    cout << "Reversed List in Groups of " << k << ": ";
    printList(head);
    return 0;
}