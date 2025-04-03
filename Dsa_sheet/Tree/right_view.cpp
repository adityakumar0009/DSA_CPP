#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
vector<int> right_view(TreeNode* root){
    if(root==NULL){
        return {};
    }
    vector<int> result;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        TreeNode* node = NULL;
        while(n--){
            node = q.front();
            q.pop();
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
        }
        result.push_back(node->data);
    }
    return result;
}
int main(){
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);
    vector<int> view = right_view(root);
    for (int val : view)
    {
        cout << val << " ";
    }
    return 0;
}