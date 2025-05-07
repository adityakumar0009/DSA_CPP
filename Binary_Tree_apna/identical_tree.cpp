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
Node* buildTree(vector<int>&preorder,int &index){
    index++;
    if(preorder[index]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[index]);
    root->left = buildTree(preorder,index);
    root->right = buildTree(preorder,index);
    return root;
}
bool is_sameTree(Node* p,Node* q){
    if (p == NULL && q == NULL) return true;
    if (p == NULL || q == NULL) return false;
    bool left_part = is_sameTree(p->left,q->left);
    bool right_part = is_sameTree(p->right,q->right);
    return left_part && right_part && p->data==q->data;
}
int main(){
    vector<int> preorder1 = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    vector<int> preorder2 = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    int index1 = -1;
    int index2 = -1;
    Node* root1 = buildTree(preorder1,index1);
    Node* root2 = buildTree(preorder2,index2);
    if(is_sameTree(root1,root2)){
        cout<<"The tree are identical"<<endl;
    }
    else{
        cout<<"The root are not identical"<<endl;
    }
    return 0;
}