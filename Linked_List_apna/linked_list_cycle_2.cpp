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
    ListNode* detect_cycle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        bool iscycle = false;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                iscycle = true;
                break;
            }
        }
        if (!iscycle)
        {
            return NULL;
        }
        slow = head;
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
int main(){
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    solution sol;
    ListNode *cycleStart = sol.detect_cycle(head);
    if(cycleStart){
        cout<<"from here cycle start "<<cycleStart->data<<endl;
    }
    else{
        cout<<"there is no cycle"<<endl;
    }
    return 0;
}