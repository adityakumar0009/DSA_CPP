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
static int index = -1;
Node* build_tree(vector<int>& preorder){
    index++;
    if(preorder[index]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[index]);
    root->left = build_tree(preorder);
    root->right = build_tree(preorder);
    return root;
}
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int left_height = height(root->left);
    if(left_height==-1){
        return -1;
    }
    int right_height = height(root->right);
    if(right_height==-1){
        return -1;
    }
    if(abs(left_height-right_height)>1){
        return -1;
    }
    return max(left_height,right_height)+1;
}
bool is_balanced(Node* root){
    return height(root) != -1;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = build_tree(preorder);
    if(is_balanced(root)){
        cout<<"It is a balanced tree";
    }
    else{
        cout<<"It is not a balanced tree";
    }
    return 0;
}