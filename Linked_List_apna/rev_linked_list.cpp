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
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
void printList(ListNode* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    ListNode* head =new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    cout<<"original list ";
    printList(head);
    //reverse list
    solution sol;
    ListNode *reversedHead = sol.reverseList(head);
    // Print the reversed list
    cout << "Reversed list: ";
    printList(reversedHead);
    return 0;
}