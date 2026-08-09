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
        left =  NULL;
        right = NULL;
    }
};
Node* build_Tree(vector<int>& preorder,int index){
    index++;
    if(preorder[index]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[index]);
    root->left = build_Tree(preorder,index);
    root->right = build_Tree(preorder,index);
    return root;
};
bool is_identical(Node* p,Node* q){
    if(p==NULL && q==NULL){
        return true;
    }
    if(p==NULL || q==NULL){
        return false;
    }
    bool is_left = is_identical(p->left,q->left);
    bool is_right = is_identical(p->right,q->right);
    return is_left && is_right && p->data == q->data;
}
int main(){
    vector<int> preorder1 = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    vector<int> preorder2 = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    int index1 = -1;
    int index2 = -1;
    Node *root1 = build_Tree(preorder1, index1);
    Node *root2 = build_Tree(preorder2, index2);
    if(is_identical(root1,root2)){
        cout<<"IT is identical Tree";
    }
    else{
        cout<<"IT is not an identical Tree";
    }
    return 0;
}