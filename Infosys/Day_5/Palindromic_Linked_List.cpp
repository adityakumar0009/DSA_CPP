#include<iostream>
#include<vector>
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
bool is_palindrome(vector<int>& arr){
    int st = 0;
    int end = arr.size()-1;
    while(st<=end){
        if(arr[st]!=arr[end]){
            return false;
        }
        st++;
        end--;
    }
    return 1;
}
bool is_palindromic_ll(Node* head){
    Node* temp = head;
    vector<int> arr;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return is_palindrome(arr);
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
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(1);
    print_list(head1);
    if(is_palindromic_ll(head1)){
        cout<<"it is palindrome "<<endl;
    }
    else{
        cout<<"it is not palindrome"<<endl;
    }
    return 0;
}