#include<iostream>
#include<vector>
using namespace  std;
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
int prev_order = 0;
int kth_smallest(Node* root,int k){
    if(root==NULL){
        return -1;
    }
    if(root->left){
        int left_ans = kth_smallest(root->left,k);
        if(left_ans!=-1){
            return left_ans;
        }
    }
    if(prev_order+1==k){
        return root->data;
    }
    prev_order = prev_order + 1;
    if(root->right){
        int right_ans = kth_smallest(root->right,k);
        if(right_ans!=-1){
            return right_ans;
        }
    }
    return -1;
}
int main(){
    Node *root = new Node(3);
    root->left = new Node(1);
    root->right = new Node(4);
    root->left->right = new Node(2);
    int k = 4;
    cout << "Kth Smallest Element in a BST " << kth_smallest(root, k);
    return 0;
}