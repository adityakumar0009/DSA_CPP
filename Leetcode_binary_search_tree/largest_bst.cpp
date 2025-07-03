#include<iostream>
#include<climits>
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
class Info{
    public:
    int min;
    int max;
    int sz;
    Info(int mi,int ma,int size){
        min = mi;
        max= ma;
        sz = size;
    }
};
Info helper(Node* root){
    if(root==NULL){
        return Info(INT_MAX,INT_MIN,0);
    }
    Info left = helper(root->left);
    Info right = helper(root->right);
    if(root->data>left.max && root->data<right.min){
        int currMin = min(root->data,left.min);
        int currMax = max(root->data,right.max);
        int currSize = left.sz+right.sz+1;
        return Info(currMin,currMax,currSize);
    }
    return Info(INT_MIN,INT_MAX,max(left.sz,right.sz));
}
int largest_bst(Node* root){
    Info info = helper(root);
    return info.sz;
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(7);
    cout<<"largest bst size is "<<largest_bst(root);
    return 0;
}