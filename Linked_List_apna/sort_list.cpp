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
    ListNode* sort_list(ListNode* head1,ListNode* head2){
        //base case
        if(head1==NULL){
            return head2;
        }
        if(head2==NULL){
            return head1;
        }

        if(head1->data<=head2->data){
            head1->next = sort_list(head1->next,head2);
            return head1;
        }
        else{
            head2->next = sort_list(head1,head2->next);
            return head2;
        }
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
    return 0;
}