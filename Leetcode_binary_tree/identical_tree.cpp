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
Node* buildTree(vector<int>& preorder,int &index){
    index++;
    if(preorder[index]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[index]);
    root->left = buildTree(preorder,index);
    root->right = buildTree(preorder,index);
};
bool is_identical(Node* p,Node* q){
    if(p==NULL && q==NULL){
        return true;
    }
    if(p==NULL || q==NULL){
        return false;
    }
    bool left_subtree = is_identical(p->left,q->left);
    bool right_subtree = is_identical(p->right,q->right);
    return left_subtree && right_subtree && p->data==q->data;
}
int main(){
    vector<int> preorder1 = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    vector<int> preorder2 = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    int index1 = -1;
    int index2 = -1;
    Node* root1 = buildTree(preorder1,index1);
    Node* root2 = buildTree(preorder2,index2);
    if(is_identical(root1,root2)){
        cout<<"it is a identical tree "<<endl;
    }
    else{
        cout<<"it is not a identical tree "<<endl;
    }
    return 0;
}