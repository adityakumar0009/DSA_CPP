#include<iostream>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode* next;
    ListNode(int val){
        data = val;
        next = NULL;
    }
};
class solution{
    public:
    bool hascycle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
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
void printlist(ListNode* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head= head->next;
    }
    cout<<endl;
}
int main(){
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;
    solution sol;
    if(sol.hascycle(head))
    {
        cout << "The list has a cycle." << endl;
    }
    else
    {
        cout << "The list does not have a cycle." << endl;
    }

    head->next->next->next->next = NULL; // Break the cycle
    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;
    return 0;
}