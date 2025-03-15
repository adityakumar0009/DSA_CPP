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
    Listnode* is_cycle(Listnode* head){
        Listnode* slow =  head;
        Listnode* fast = head;
        bool cycle = false;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                cycle = true;
                break;
            }
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return head;
        }
        return NULL;
    }
};
void print_List(Listnode* head){
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
    head->next->next->next = head->next;
    solution sol;
    Listnode* ans = sol.is_cycle(head);
    cout<<"delete node is -> "<<ans->data;
    return 0;
}