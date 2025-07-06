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
bool is_helper(Node* root,Node* min,Node* max){
    if(root==NULL){
        return NULL;
    }
    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>=max->data){
        return false;
    }
    return is_helper(root->left,min,root) && is_helper(root->right,root,max);
}
bool is_bst(Node* root){
    return is_helper(root,NULL,NULL);
}
int main(){
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(7);
    root->left->left = new Node(2);
    root->left->right = new Node(4);
    root->right->right = new Node(9);

    if(is_bst(root)){
        cout << "The tree is a BST." << endl;
    } else {
        cout << "The tree is NOT a BST." << endl;
    }
    return 0;
}