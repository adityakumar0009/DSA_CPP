#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node *next_right = NULL;
void flatten(Node* root){
    if(root==NULL){
        return ;
    }
    flatten(root->right);
    flatten(root->left);
    root->left = NULL;
    root->right = next_right;
    next_right = root;
}
void print(Node* root){
    Node* curr = root;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->right;
    }
    cout<<endl;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right = new Node(5);
    root->right->right = new Node(6);
    cout << "Flatten Binary Tree to Linked List ";
    flatten(root);
    print(root);
    return 0;
}