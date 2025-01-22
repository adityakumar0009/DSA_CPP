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
ListNode* swap_pairs(ListNode* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    ListNode* first = head;
    ListNode* second = head->next;
    ListNode* prev = NULL;
    while(first!=NULL && second!=NULL){
        ListNode* third = second->next;
        second->next=first;
        first->next = third;
        if(prev!=NULL){
            prev->next=second;
        }
        else{
            head = second;
        }
        //update
        prev = first;
        first = third;
        if(third!=NULL){
            second = third->next;
        }
        else{
            second = NULL;
        }
    }
    return head;
}

void printList(ListNode* head){
    while(head!=NULL){
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
    cout<<"original list : "<<" ";
    printList(head);
    cout<<"swap_node_pair :"<<" ";
    head = swap_pairs(head);
    printList(head);
    return 0;
}