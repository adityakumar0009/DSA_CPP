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
bool check_palindrome(vector<int>& arr){
    int st = 0;
    int end = arr.size()-1;
    while(st<=end){
        if(arr[st]!=arr[end]){
            return 0;
        }
        else{
            st++;
            end--;
        }
    }
    return 1;
}
bool is_palindrome(Node* head){
    vector<int> arr;
    Node* temp = head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return check_palindrome(arr);
};
void print_list(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
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