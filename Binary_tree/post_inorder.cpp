#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int search(int inorder[],int st,int end,int curr){
    for(int i=st; i<=end; i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
Node* Tree(int postorder[], int in_order[], int st, int end){
    static int idx = 4;
    if(st>end){
        return NULL;
    }
    int val = postorder[idx];
    idx--;
    Node* curr = new Node(val);
    if(curr==NULL){
        return NULL;
    }
    int pos = search(in_order,st,end,val);
    curr->right = Tree(postorder,in_order,pos+1,end);
    curr->left = Tree(postorder,in_order,st,pos-1);
    return curr;
}

void in_order_print(Node* root){
    if(root==NULL){
        return;
    }
    in_order_print(root->left);
    cout<<root->data<<" ";
    in_order_print(root->right);
}
int main(){
    int post_order[] = {4,2,5,3,1};
    int in_order[] = {4,2,1,5,3};

    Node* root = Tree(post_order,in_order,0,4);
    in_order_print(root);
    cout<<"\n";
    return 0;
}