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
class solution{
    public:
    bool detect_cycle(Listnode* head){
        Listnode* slow = head;
        Listnode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
void print_list(Listnode* head){
    Listnode* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Listnode* head = new Listnode(1);
    head->next = new Listnode(2);
    head->next->next = new Listnode(3);
    head->next->next->next =head->next;

    solution sol;
    if(sol.detect_cycle(head)){
        cout<<"cycle is found"<<endl;
    }
    else{
        cout<<"cycle is not found"<<endl;
    }
    return 0;
}