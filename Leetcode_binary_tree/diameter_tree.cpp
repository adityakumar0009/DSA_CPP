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
    int left_subtree = height(root->left);
    int right_subtree = height(root->right);
    return max(left_subtree,right_subtree)+1;
}
int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int left_diameter = diameter(root->left);
    int right_diameter = diameter(root->right);
    int curr_diameter = height(root->left) + height(root->right);
    return max((left_diameter,right_diameter),curr_diameter);
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);
    cout<<"diameter of the tree is -> "<<diameter(root);
    return 0;
}