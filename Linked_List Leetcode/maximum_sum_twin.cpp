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
int pair_sum(Node* head){
    vector<int> arr;
    Node* temp = head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    int result = 0;
    int i = 0;
    int j = arr.size()-1;
    while(i<j){
        result = max(result,arr[i]+arr[j]);
        i++;
        j--;
    }
    return result;
}
void print_list(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    print_list(head);
    cout<<"maximum sum_twin is ";
    cout<<pair_sum(head);
    return 0;
}