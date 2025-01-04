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
    ListNode* del_mid(ListNode* head){
        if(head==NULL || head->next==NULL){
            delete head;
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while(fast!=NULL && fast->next!=NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = slow->next;
        delete slow;
        return head;
    }
};
void printlist(ListNode* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    cout<<"original list "<<" ";
    printlist(head);
    solution sol;
    ListNode* del = sol.del_mid(head);
    cout<<"delete middle element ";
    printlist(del);
    return 0;
}

// class Solution
// {
// public:
//     ListNode *deleteMiddle(ListNode *head)
//     {
//         if (head == NULL || head->next == NULL)
//         {
//             delete head;
//             return NULL;
//         }
//         ListNode *fast = head;
//         ListNode *slow = head;
//         ListNode *prev = NULL;
//         while (fast != NULL && fast->next != NULL)
//         {
//             prev = slow;
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         prev->next = slow->next;
//         delete slow;
//         return head;
//     }
// };