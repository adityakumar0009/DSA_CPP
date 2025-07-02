// building binary tree with preorder sequence
// preorder - root,left,right
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
Node* buildTree(vector<int>& prorder){
    index++;
    if(prorder[index]==-1){
        return NULL;
    }
    Node* root = new Node(prorder[index]);
    root->left = buildTree(prorder);
    root->right = buildTree(prorder);
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    return 0;
}