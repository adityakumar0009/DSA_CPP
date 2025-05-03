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
Node *buildTree(vector<int>&preorder){
    index++;
    if(preorder[index]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}
void kth_level(Node* root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
    }
    kth_level(root->left,k-1);
    kth_level(root->right,k-1);
}
int main(){
    vector<int> preorder = {1, 2,7, -1, -1,-1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
    kth_level(root,3);
    return 0;
}