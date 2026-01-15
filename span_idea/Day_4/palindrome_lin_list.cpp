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
bool check_palindrome(vector<int> arr){
    int st = 0;
    int end = arr.size()-1;
    while(st<=end){
        if(arr[st]!=arr[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
bool is_palindrome(Node* head){
    vector<int> ans;
    Node* temp = head;
    while(temp!=NULL){
        ans.push_back(temp->data);
        temp = temp->next;
    }
    return check_palindrome(ans);
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
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(1);
    print_list(head);
    if(is_palindrome(head)){
        cout<<"it is palindrome "<<endl;
    }
    else{
        cout<<"it is not palindrome"<<endl;
    }
    return 0;
}