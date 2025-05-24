#include<iostream>
#include<vector>
using namespace std;
vector<int> Pair_sum(vector<int>&arr,int& target){
    vector<int> ans;
    int st = 0;
    int end = arr.size()-1;
    while(st<end){
        int ps = arr[st]+arr[end];
        if(ps>target){
            end--;
        }
        else if(ps<target){
            st++;
        }
        else{
            ans.push_back(st);
            ans.push_back(end);