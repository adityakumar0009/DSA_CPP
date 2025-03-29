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
    int findlength(Listnode* head){
        int l = 0;
        while(head!=NULL){
            head = head->next;
            l++;
        }
        return l;
    }
    Listnode* swapnode(Listnode* head,int k){
        int L = findlength(head);
        int k1 = k;
        Listnode* node1 = head;
        while(k1>1){
            node1 = node1->next;
            k1--;
        }
        int k2 = L-k+1;
        Listnode* node2 = head;
        while(k2>1){
            node2 = node2->next;
            k2--;
        }
        swap(node1->data,node2->data);
        return head;
    }
};
void print(Listnode *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    Listnode* head = new Listnode(1);
    head->next = new Listnode(2);
    head->next->next = new Listnode(3);
    head->next->next->next = new Listnode(4);
    head->next->next->next->next = new Listnode(5);
    cout<<"linked list before swapping ";
    print(head);
    cout<<"linked list after swapping ";
    Solution sol;
    Listnode *ans = sol.swapnode(head,2);
    print(head);
    return 0;
}