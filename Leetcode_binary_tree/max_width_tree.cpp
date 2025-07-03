#include<iostream>
#include<queue>
#include<algorithm>
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
int max_width(Node* root){
    queue<pair<Node*,unsigned long long>> q;
    q.push({root,0});
    int max_width = 0;
    while(q.size()>0){
        int curr_size = q.size();
        unsigned long long left_width = q.front().second;
        unsigned long long right_width = q.back().second;
        max_width = max(max_width, (int)(right_width - left_width) + 1);
        for(int i=0; i<curr_size; i++){
            auto curr = q.front();
            q.pop();
            if(curr.first->left){
                q.push({curr.first->left,2*curr.second+1});
            }
            if(curr.first->right){
                q.push({curr.first->right,2*curr.second+2});
            }
        }
    }
    return max_width;
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(3);
    root->right = new Node(2);
    root->left->left = new Node(5);
    root->left->right = new Node(3);
    root->right->right = new Node(9);

    cout << "Maximum width of binary tree: " << max_width(root) << endl;
    return 0;
}