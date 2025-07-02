// Given the root of a binary tree and an integer K, print all the nodes that are present at the K - th level of the tree
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
    root->right= buildTree(preorder);
    return root;
}
void kth_level(Node* root,int key){
    if(root==NULL){
        return ;
    }
    if(key==1){
        cout<<root->data<<" ";
        return;
    }
    kth_level(root->left,key-1);
    kth_level(root->right,key-1);
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    int key = 3;
    Node* root = buildTree(preorder);
    kth_level(root,key);
    return 0;
}