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
Node* build_Tree(vector<int>&preorder){
    index++;
    if(preorder[index]==-1){
        return NULL;
    }
    Node *root = new Node(preorder[index]);
    root->left = build_Tree(preorder);
    root->right = build_Tree(preorder);
    return root;
}
Node* next_right = NULL;
void flatten(Node* root){
    if(root==NULL){
        return;
    }
    flatten(root->right);
    flatten(root->left);
    root->left = NULL;
    root->right = next_right;
    next_right = root;
}

void printFlattenedList(Node *root)
{
    while (root != NULL)
    {
        cout << root->data << " ";
        root = root->right;
    }
    cout << endl;
}
int main(){
    vector<int> preorder = {1, 2, 3, -1, -1, 4, -1, -1, 5, 6, -1, -1, -1};
    Node *root = build_Tree(preorder);
    flatten(root);
    printFlattenedList(root);
    return 0;
}