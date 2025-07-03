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
Node* insert(Node* root,int val){
    if(root==NULL){
        return root = new Node(val);
    }
    if(val<root->data){
        root->left = insert(root->left,val);
    }
    else{
        root->right = insert(root->right,val);
    }
    return root;
}
Node* buildTree(vector<int>& arr){
    Node* root = NULL;
    for(int val : arr){
        root = insert(root,val);
    }
    return root;
}
Node* deleteNode(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key<root->data){
        root->left =  deleteNode(root->left,key);
    }
    else if(key>root->data){
        root->right =  deleteNode(root->right,key);
    }
    else{
        //key == root
        
    }
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    vector<int> arr = {3, 2, 1, 5, 6, 4}; 
    Node* root = buildTree(arr);
    inorder(root);
    return 0;
}