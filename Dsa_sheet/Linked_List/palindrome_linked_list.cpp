#include<iostream>
#include<vector>
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
    private:
    bool checkPalindrome(vector<int> arr){
        int n = arr.size();
        int st = 0;
        int end = n-1;
        while(st<=end){
            if(arr[st]!=arr[end]){
                return 0;
            }
            st++;
            end--;
        }
        return 1;
    }
    public:
    bool is_palindrome(Listnode* head){
        vector<int> ans;
        Listnode* temp = head;
        while(temp!=NULL){
            ans.push_back(temp->data);
            temp = temp->next;
        }
        return checkPalindrome(ans);
    }
};
void printList(Listnode* head){
    Listnode* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Listnode *head = new Listnode(1);
    head->next = new Listnode(2);
    head->next->next = new Listnode(3);
    head->next->next->next = new Listnode(2);
    head->next->next->next->next = new Listnode(1);
    cout << "Linked List: ";
    printList(head);

    // Check if it's a palindrome
    Solution sol;
    if (sol.is_palindrome(head))
    {
        cout << "The linked list is a palindrome." << endl;
    }
    else
    {
        cout << "The linked list is not a palindrome." << endl;
    }
    return 0;
}