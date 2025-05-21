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
void inorder(Node* root){
    if (root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node *buildBst(vector<int> &arr){
    Node* root = NULL;
    for(int val: arr){
        root = insert(root,val);
    }
    return root;
}

Node* getInorderSuccesor(Node* root){
    while(root!=NULL && root->left!=NULL){
        root = root->left;
    }
    return root;
}
Node* delete_Node(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key<root->data){
        root->left = delete_Node(root->left,key);
    }
    else if(key>root->data){
        root->right = delete_Node(root->right,key);
    }
    else{
        //key == root
        if(root->left==NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else{//2children
            Node* IS = getInorderSuccesor(root->right);
            root->data = IS->data;
            root->right = delete_Node(root->right,IS->data);
        }
    }
    return root;
}
int main(){
    vector<int> arr = {3, 2, 1, 5, 6, 4};
    Node* root = buildBst(arr);
    inorder(root);
    cout<<endl;
    delete_Node(root,6);
    inorder(root);
    return 0;
}