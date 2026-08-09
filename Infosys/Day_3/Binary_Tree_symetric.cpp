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
Node* build_Tree(vector<int>& preorder){
    index++;
    if(preorder[index]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[index]);
    root->left = build_Tree(preorder);
    root->right = build_Tree(preorder);
    return root;
};
bool is_identical(Node* p,Node* q){
    if(p==NULL && q==NULL){
        return true;
    }
    if(p==NULL || q==NULL){
        return false;
    }
    bool is_left = is_identical(p->left,q->right);
    bool is_right = is_identical(p->right,q->left);
    return is_left && is_right && p->data==q->data;
}
bool is_symmetric(Node* root){
    if(root==NULL){
        return true;
    }
    return is_identical(root->left,root->right);
}
int main(){
    vector<int> preorder1 = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = build_Tree(preorder1);
    if(is_symmetric(root)){
        cout<<"Tree is symmetric";
    }
    else{
        cout<<"Tree is not symmetric";
    }
    return 0;
}