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
class Solution{
vector<int> arr;
public:
Solution(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
}
int getRandom(){
    int n = arr.size();
    int random_index = rand()%n;
    return arr[random_index];
}
};
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    Solution sol(head);

    cout << "Random value from list: " << sol.getRandom() << endl;
    cout << "Another random value: " << sol.getRandom() << endl;
    return 0;
}