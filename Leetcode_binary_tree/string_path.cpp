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
void all_paths(Node* root,string paths,vector<string>& ans){
    if(root->left== NULL && root->right==NULL){
        ans.push_back(paths);
        return;
    }
    if(root->left){
        all_paths(root->left,paths+"->"+to_string(root->left->data),ans);
    }
    if(root->right){
        all_paths(root->right, paths + "->" + to_string(root->right->data), ans);
    }
}
vector<string> binary_path(Node* root){
    vector<string> ans;
    string paths= to_string(root->data);
    all_paths(root,paths,ans);
    return ans;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    vector<string> result = binary_path(root);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<endl;
    }
    cout<<endl;
    return 0;
}
