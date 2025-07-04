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
vector<int> Morris_inorder(Node* root){
    vector<int> ans;
    Node* curr = root;
    while(curr!=NULL){
        if(curr->left==NULL){
            ans.push_back(curr->data);
            curr = curr->right;
        }
        else{
            //find inorderprecedence
            Node* Ip = curr->left;
            while(Ip->right!=NULL && Ip->right!=curr){
                Ip =Ip->right;
            }
            if(Ip->right==NULL){
                Ip->right = curr; //create
                curr = curr->left;
            }
            else{
                Ip->right = NULL; //destroy
                ans.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
    return ans;
}
int main(){
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    vector<int> result = Morris_inorder(root);
    for(int val : result) {
        cout << val << " ";
    }
    return 0;
}