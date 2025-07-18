//we have to find height of a tree if root is null return o.
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
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int left_height = height(root->left);
    int right_height = height(root->right);
    return max(left_height,right_height)+1;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);
    cout<<"height of a binary tree is -> "<<height(root);
    return 0;
}