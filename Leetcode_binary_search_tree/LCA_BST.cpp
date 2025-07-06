#include<iostream>
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
Node* LCA_BST(Node* root,Node* p,Node* q){
    if(root==NULL){
        return NULL;
    }
    if(root->data>p->data && root->data>q->data){
        return LCA_BST(root->left,p,q);
    }
    else if(root->data<p->data && root->data<q->data){
        return LCA_BST(root->right,p,q);
    }
    else{
        return root;
    }
}
int main(){
    Node* root = new Node(2);
    root->left = new Node(1);

    Node* p = root;
    Node* q = root->left;

    cout << "LCA_BST is " << LCA_BST(root, p, q)->data;
    return 0;
}