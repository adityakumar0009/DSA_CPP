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
Node* buildTree(vector<int> &preorder){
    index++;
    if(preorder[index]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}
void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int sum_tree(Node* root){
    if(root==NULL){
        return 0;
    }
    int left_sum = sum_tree(root->left);
    int right_sum = sum_tree(root->right);
    root->data+=left_sum+right_sum;
    return root->data;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
    cout<<"before conversion"<<endl;
    preOrder(root);
    cout<<endl;
    sum_tree(root);
    cout<<"after conversion"<<endl;
    preOrder(root);
    return 0;
}