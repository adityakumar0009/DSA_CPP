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
class Solution{
    public:
    ListNode* remove_cycle(ListNode* head){
        ListNode* slow = head; 
        ListNode* fast = head;
        bool is_cycle = false;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                is_cycle = true;
                break;
            }
        }
        if(!is_cycle){
            return NULL;
        }
        slow = head;
        ListNode *prev = NULL;
        while(slow!=fast){
            prev = fast;
            slow = slow->next;
            fast = fast->next;
        }
        prev->next = NULL;
        return head;
    }
};
int main(){
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;
    Solution sol;
    sol.remove_cycle(head);
    cout<<"Listing after removing cycle"<<" ";
    ListNode* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    return 0;
}