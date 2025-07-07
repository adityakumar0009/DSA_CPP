#include<iostream>
#include<climits>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};
Node* prev = NULL;
int min_distance_bst(Node* root){
    if(root==NULL){
        return INT_MAX;
    }
    int ans = INT_MAX;
    if(root->left!=NULL){
        int left_min = min_distance_bst(root->left);
        ans = min(ans,left_min);
    }
    if(prev!=NULL){
        ans = min(ans,root->data-prev->data);
    }
    prev = root;
    if(root->right!=NULL){
        int right_min = min_distance_bst(root->right);
        ans = min(right_min,ans);
    }
    return ans;
}
int main(){
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);

    int result = min_distance_bst(root);
    cout << "Minimum difference: " << result << endl;
    return 0;
}