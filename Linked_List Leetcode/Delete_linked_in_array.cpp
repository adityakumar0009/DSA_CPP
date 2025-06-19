#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
Node* Modified_list(vector<int>& nums,Node* head){
    unordered_set<int> st(begin(nums),end(nums));
    while (head != NULL && st.find(head->data) != st.end()){
        head = head->next;
    }
    if(head==NULL){
        return NULL;
    }
    Node* curr = head;
    while(curr!=NULL && curr->next!=NULL){
        if(st.find(curr->next->data)!=st.end()){
            curr->next = curr->next->next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}
void print_list(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<endl;
}
int main(){
    vector<int> nums = {1, 2, 3};
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    cout<<"print list before deletion is ";
    print_list(head);
    head = Modified_list(nums,head);
    cout << "print list after deletion is ";
    print_list(head);
    return 0;
}