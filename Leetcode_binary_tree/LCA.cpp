#include<iostream>
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
Node* LCA(Node* root,Node* p,Node* q){
    if(root==NULL){
        return NULL;
    }
    if(root->data==p->data || root->data==q->data){
        return root;
    }
    Node* left_lca = LCA(root->left,p,q);
    Node* right_lca = LCA(root->right,p,q);
    if(left_lca && right_lca){
        return root;
    }
    else if(left_lca!=NULL){
        return left_lca;
    }
    else{
        return left_lca;
    }
}
int main(){
    Node* root = new Node(3);
    root->left = new Node(5);
    root->right = new Node(1);
    root->left->left = new Node(6);
    root->left->right = new Node(2);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);
    root->right->left = new Node(0);
    root->right->right = new Node(8);

    Node* p = root->left;            // Node with value 5
    Node* q = root->left->right->right; // Node with value 4

    Node* ancestor = LCA(root, p, q);
    if (ancestor != NULL) {
        cout << "Lowest Common Ancestor of " << p->data << " and " << q->data << " is: " << ancestor->data << endl;
    } else {
        cout << "Lowest Common Ancestor not found." << endl;
    }

    return 0;
}