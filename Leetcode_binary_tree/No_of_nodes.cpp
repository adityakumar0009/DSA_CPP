// count the total number of nodes in the tree.
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
Node* buildTree(vector<int>& preoder){
    index++;
    if(preoder[index]==-1){
        return NULL;
    }
    Node* root = new Node(preoder[index]);
    root->left = buildTree(preoder);
    root->right = buildTree(preoder);
}
int No_nodes(Node* root){
    if(root==NULL){
        return 0;
    }
    int left_node = No_nodes(root->left);
    int right_node = No_nodes(root->right);
    return left_node+right_node+1;
}
int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);
    cout<<"No of nodes in a tree is-> "<<No_nodes(root);
    return 0;
}