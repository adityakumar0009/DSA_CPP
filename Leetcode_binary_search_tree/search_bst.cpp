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
    if(val>root->data){
        root->right = insert(root->right,val);
    }
    else{
        root->left = insert(root->left,val);
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
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool search(Node* root,int key){
    if(root->data==key){
        return true;
    }
    if(root==NULL){
        return false;
    }
    if(key<root->data){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }

}
int main(){
    vector<int> arr = {3, 2, 1, 5, 6, 4};
    Node* root = buildTree(arr);
    inorder(root);
    cout<<endl;
    cout<<search(root,5);
    return 0;
}