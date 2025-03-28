#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int count_node(Node* root){
    if(root==NULL){
        return 0;
    }
    return count_node(root->left)+count_node(root->right) + 1;
}
int sum(Node* root){
    if(root==NULL){
        return 0;
    }
    return sum(root->left) + sum(root->right) + root->data;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<count_node(root);
    cout<<endl;
    cout<<sum(root);
    return 0;
}