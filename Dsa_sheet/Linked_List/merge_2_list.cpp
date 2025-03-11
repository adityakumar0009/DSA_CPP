#include<iostream>
using namespace std;
class Listnode{
    public:
    int data;
    Listnode* next;
    Listnode(int val){
        data = val;
        next = NULL;
    }
};
class Solution{
    public:
    Listnode* merge_2_list(Listnode* head1,Listnode* head2){
        if(head1==NULL){
            return head2;
        }
        if(head2==NULL){
            return head1;
        }
        if(head1->data<=head2->data){
            head1->next = merge_2_list(head1->next,head2);
            return head1;
        }
        else{
            head2->next = merge_2_list(head1,head2->next);
            return head2;
        }
    }
};
void printlist(Listnode* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Listnode *head1 = new Listnode(1);
    head1->next = new Listnode(2);
    head1->next->next = new Listnode(3);
    printlist(head1);

    Listnode *head2 = new Listnode(3);
    head2->next = new Listnode(4);
    head2->next->next = new Listnode(5);
    printlist(head1);
    Solution sol;
    Listnode *mergedHead = sol.merge_2_list(head1, head2);

    cout << "Merged List: ";
    printlist(mergedHead);
    return 0;
}