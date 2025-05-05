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
Node* buildTree(vector<int>&preorder){
    index++;
    if(preorder[index]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[index]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);
    return root;
}
void all_path(Node* root,string path,vector<string> &ans){
    if(root->left==NULL && root->right==NULL){
        ans.push_back(path);
        return ;
    }
    if(root->left){
        all_path(root->left,path+"->"+to_string(root->left->data),ans);
    }
    if(root->right){
        all_path(root->right,path+"->"+to_string(root->right->data),ans);
    }
}
vector<string> binary_path(Node* root){
    vector<string> ans;
    string path = to_string(root->data);
    all_path(root,path,ans);
    return ans;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
    vector<string> paths = binary_path(root);
    for (string path : paths)
    {
        cout << path << endl;
    }
    return 0;
}