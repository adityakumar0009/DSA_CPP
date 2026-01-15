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
bool chech_palindrome(vector<int>& arr){
    int n = arr.size();
    int st = 0;
    int end = n-1;
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
    vector<int> arr;
    Node* temp = head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return chech_palindrome(arr);
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    if(is_palindrome(head)){
        cout<<"It is a palindromic Linked List "<<endl;
    }
    else{
        cout<<"It is not a palindromic Linked List ";
    }
    return 0;
}