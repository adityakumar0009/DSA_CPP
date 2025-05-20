#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};
Node* insert(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left = insert(root->left,val);
    }
    else{
        root->right = insert(root->right,val);
    }
    return root;
}
Node* buildBst(vector<int>& arr){
    Node* root = NULL;
    for(int val:arr){
        root = insert(root,val);
    }
    return root;
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool search(Node* root, int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(root->data>key){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}
int main(){
    vector<int> arr = {3,2,1,5,6,4};
    Node* root = buildBst(arr);
    inorder(root);
    return 0;
}