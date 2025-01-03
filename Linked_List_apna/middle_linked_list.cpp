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
    ListNode* middleNode(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
void printlist(ListNode* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    cout<<"original list ";
    printlist(head);
    //middle
    solution sol;
    ListNode* insert_mid = sol.middleNode(head);
    cout<<"middle element"<<" ";
    printlist(insert_mid);
    return 0;
}