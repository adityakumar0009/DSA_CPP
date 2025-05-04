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
Node *findNode(Node *root, int val)
{
    if (root == NULL)
        return NULL;
    if (root->data == val)
        return root;
    Node *left = findNode(root->left, val);
    if (left != NULL)
        return left;
    return findNode(root->right, val);
}
Node* LCA(Node* root, Node* p,Node* q){
    if(root==NULL){
        return NULL;
    }
    if(root->data==p->data || root->data==q->data){
        return root;
    }
    Node* left_lca = LCA(root->left,p,q);
    Node* right_lca = LCA(root->right,p,q);

    if(left_lca && right_lca){
        return root;
    }
    else if(left_lca!=NULL){
        return left_lca;
    }
    else{
        return right_lca;
    }
}
int main(){
    vector<int> preorder = {3, 5, 6, -1, -1, 2, 7, -1, -1, 4, -1, -1, 1, 0, -1, -1, 8, -1, -1};
    Node *root = buildTree(preorder);
    Node *p = findNode(root, 5);
    Node *q = findNode(root, 1);
    Node* ancestor = LCA(root,p,q);
    cout<<"lowest common ancestor is -> "<<ancestor->data;
    return 0;
}