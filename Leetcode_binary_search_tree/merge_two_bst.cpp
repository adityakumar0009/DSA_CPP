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
Node* insert(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left = insert(root->left,val);
    }
    else{
        root->right = insert(root->right,val);
    }
    return root;
}
Node* buildTree(vector<int>& arr){
    Node* root = NULL;
    for(int val : arr){
        root = insert(root,val);
    }
    return root;
}
void inorder(Node* root,vector<int>& arr){
    if(root==NULL){
        return;
    }
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);
}
Node* build_bst_sorted(vector<int> arr,int st,int end){
    if(st>end){
        return NULL;
    }
    int mid = st+(end-st)/2;
    Node* root = new Node(arr[mid]);
    root->left = build_bst_sorted(arr,st,mid-1);
    root->right = build_bst_sorted(arr,mid+1,end);
    return root;
}
Node* merge2Bst(Node* root1,Node* root2){
    vector<int> arr1,arr2;
    inorder(root1,arr1);
    inorder(root2,arr2);
    vector<int> temp;
    int i=0,j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            temp.push_back(arr1[i]);
            i++;
        }
        else{
            temp.push_back(arr2[j]);
            j++;
        }
    }
    while(i<arr1.size()){
        temp.push_back(arr1[i]);
        i++;
    }
    while(j<arr2.size()){
        temp.push_back(arr2[j]);
        j++;
    }
    return build_bst_sorted(temp,0,temp.size()-1);
}
int main(){
    vector<int> arr1 = {10, 5, 1, 7, 40};
    vector<int> arr2 = {15, 12, 18, 11, 20};

    Node* root1 = buildTree(arr1);
    Node* root2 = buildTree(arr2);

    Node* merged = merge2Bst(root1, root2);

    vector<int> result;
    inorder(merged, result);
    for(int val : result){
        cout << val << " ";
    }
    return 0;
}