// Given an integer array nums where the elements are sorted in ascending order, convert it into a height-balanced binary search tree (BST).
#include<iostream>
#include<vector>
#include<queue>
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
Node* helper(vector<int>& nums,int st,int end){
    if(st>end){
        return NULL;
    }
    int mid = st+(end-st)/2;
    Node* root = new Node(nums[mid]);
    root->left = helper(nums,st,mid-1);
    root->right = helper(nums,mid+1,end);
    return root;
}
Node* sorted_array(vector<int>&nums){
    return helper(nums,0,nums.size()-1);
}
void level_order(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        Node *curr = q.front();
        q.pop();
        if(curr==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else{
                break;
            }
        }
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}
int main(){
    vector<int> nums = {-10, -3, 0, 5, 9};
    Node *root = sorted_array(nums);
    level_order(root);
    return 0;
}