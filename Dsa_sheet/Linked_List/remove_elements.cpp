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
    ListNode* remove_elemnt(ListNode* head,int val){
        while(head!=NULL && head->data==val){
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* curr = head;
        while(curr!=NULL && curr->next!=NULL){
            if(curr->next->data == val){
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            }
            else{
                curr = curr->next;
            }
        }
        return head;
    }
};

int main(){
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    printList(head);
    Solution sol;
    return 0;
}