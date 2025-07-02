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
int search(vector<int>& inorder,int left,int right,int val){
    for(int i=left; i<=right; i++){
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
}
Node* helper(vector<int>& preorder,vector<int>& inorder,int& preIndex,int& left,int& right){
    if(left>right){
        return NULL;
    }
    Node* root = new Node(preorder[preIndex]);
    int inIndex = search(inorder,left,right,root->data);
    preIndex++;
    root->left = helper(preorder, inorder, preIndex, left, inIndex - 1);
    root->right = helper(preorder,inorder,preIndex,inIndex+1,right);
    return root;
}
Node* buildTree(vector<int>& preorder,vector<int>& inorder){
    int preIndex =  0;
    return helper(preorder,inorder,preIndex,0,inorder.size()-1);
}
void printInorder(Node* root) {
    if (!root) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}
int main(){
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    Node *root = buildTree(preorder, inorder);

    cout << "Inorder of constructed tree: ";
    printInorder(root);
    cout << endl;
    return 0;
}