// Given the root of a binary tree, write a function to calculate the sum of all nodes' values in the tree.
#include<iostream>
#include<vector>
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
static int index = -1;
Node* buildTree(vector<int>& preorder){
    index++;
    if(preorder[index]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
}
int sum_node(Node* root){
    if(root==NULL){
        return 0;
    }
    int left_subtree = sum_node(root->left);
    int right_subtree = sum_node(root->right);
    return left_subtree+right_subtree+root->data;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);
    cout<<"sum of node of a tree is -> "<<sum_node(root);
    return 0;
}