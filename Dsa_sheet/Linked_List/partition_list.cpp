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
ListNode* partition(ListNode* head,int x){
    ListNode* small = new ListNode(0);
    ListNode* large = new ListNode(0);

    ListNode* small_ptr = small;
    ListNode* large_ptr = large;

    while(head!=NULL){
        if(head->data<x){
            small_ptr->next = head;
            small_ptr = small_ptr->next;
        }
        else{
            large_ptr->next = head;
            large_ptr = large_ptr->next;
        }
        head = head->next;
    }
    small_ptr->next = large->next;
    large_ptr->next = NULL;
    return small->next;
}
void print(ListNode* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    ListNode* head = new ListNode(1);
    
    return 0;
}