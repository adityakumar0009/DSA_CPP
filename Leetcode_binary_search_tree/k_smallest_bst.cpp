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
int preorder = 0;
int left_smallest(Node* root,int k){
    if(root==NULL){
        return -1;
    }
    if(root->left){
        int left_ans = left_smallest(root->left, k);
        if(left_ans!=-1){
            return left_ans;
        }
    }
    if(preorder+1==k){
        return root->data;
    }
    preorder = preorder + 1;
    if(root->right){
        int right_ans = left_smallest(root->right,k);
        if(right_ans!=-1){
            return right_ans;
        }
    }
    return -1;
}
int main(){
    Node* root = new Node(3);
    root->left = new Node(1);
    root->right = new Node(4);
    root->left->right = new Node(2);
    int k = 4;
    cout<<"Kth Smallest Element in a BST "<<left_smallest(root,k);
    return 0;
}