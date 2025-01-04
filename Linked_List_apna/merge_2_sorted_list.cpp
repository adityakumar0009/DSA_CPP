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
    ListNode* mergeTwoList(ListNode* head1, ListNode* head2){
        //base case
        if(head1==NULL){
            return head2;
        }
        if(head2==NULL){
            return head1;
        }

        if(head1->data <= head2->data){
            head1->next = mergeTwoList(head1->next,head2);
            return head1;
        }
        else{
            head2->next = mergeTwoList(head1,head2->next);
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

ListNode *createList(int arr[], int size)
{
    if (size == 0)
        return NULL;
    ListNode *head = new ListNode(arr[0]);
    ListNode *current = head;
    for (int i = 1; i < size; i++)
    {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}
int main(){
    int arr1[] = {1,3,5};
    int arr2[] = {2,4,6};
    // Create linked lists
    ListNode *head1 = createList(arr1, 3);
    ListNode *head2 = createList(arr2, 3);
    cout<<"List 1 "<<" ";
    printList(head1);
    cout<<"List 2 "<<" ";
    printList(head2);

    solution sol;
    ListNode* mergeHead = sol.mergeTwoList(head1,head2);
    cout<<"merged list ";
    printList(mergeHead);
    return 0;
}