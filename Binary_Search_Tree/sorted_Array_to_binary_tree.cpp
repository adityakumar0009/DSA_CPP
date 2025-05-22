#include<iostream>
#include<vector>
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
class Solution{
    public:
    TreeNode* helper(vector<int>& arr,int st,int end){
        if(st>end){
            return NULL;
        }
        int mid = st+(end-st)/2;
        TreeNode* root = new TreeNode(arr[mid]);
        root->left = helper(arr,st,mid-1);
        root->right = helper(arr,mid+1,end);
        return root;
    }
    TreeNode *sorted_Array(vector<int> &arr){
        return helper(arr,0,arr.size()-1);
    }
    void inorder(TreeNode* root){
        if(root==NULL){
            return ;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
};
int main(){
    vector<int> arr = {-10, -3, 0, 5, 9};
    Solution obj;
    TreeNode *root = obj.sorted_Array(arr);
    obj.inorder(root);
    return 0;
}