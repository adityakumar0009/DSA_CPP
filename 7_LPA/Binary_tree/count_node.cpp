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
Node* build_tree(vector<int>& preorder){
    index++;
    if(preorder[index]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[index]);
    root->left = build_tree(preorder);
    root->right = build_tree(preorder);
    return root;
}
int count(Node* root){
    if(root==NULL){
        return 0;
    }
    int left_count = count(root->left);
    int right_count = count(root->right);
    return left_count+right_count+1;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = build_tree(preorder);
    cout<<"Height of tree is "<<count(root);
    return 0;
}