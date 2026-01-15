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
        left =  NULL;
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
void pre_order(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    pre_order(root->left);
    pre_order(root->right);
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = build_tree(preorder);
    pre_order(root);
    return 0;
}