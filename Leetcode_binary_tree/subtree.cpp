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
    return root;
}
bool is_identical(Node* p,Node* q){
    if(p==NULL && q==NULL){
        return true;
    }
    if(p==NULL || q==NULL){
        return false;
    }
    bool left_subtree = is_identical(p->left,q->left);
    bool right_subtree = is_identical(p->right,q->right);
    return left_subtree && right_subtree && p->data==q->data;
}
bool is_subtree(Node* root,Node* subroot){
    if(root==NULL){
        return false;
    }
    if(is_identical(root,subroot)){
        return true;
    }
    return is_subtree(root->left,subroot) || is_subtree(root->right,subroot);
}
int main(){
    vector<int> preorder1 = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    vector<int> preorder2 = {3, 4, -1, -1, 5, -1, -1};
    index = -1;
    Node *root = buildTree(preorder1);
    index = -1;
    Node *subroot = buildTree(preorder2);
    if(is_subtree(root,subroot)){
        cout<<"it is a subtree "<<endl;
    }
    else{
        cout<<"it is not a subtree "<<endl;
    }
    return 0;
}