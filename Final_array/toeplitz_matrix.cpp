#include<iostream>
#include<vector>
using namespace std;
bool is_toeplitz(vector<vector<int>> nums){
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums[i].size(); j++){
            if(nums[i][j]==nums[i-1][j-1]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<vector<int>> nums = { {1, 2, 3, 4},
                                 {5, 1, 2, 3},
                                 {9, 5, 1, 2} };
    if(is_toeplitz(nums)){
        cout<<"It is toeplitz matrix "<<endl;
    }                             
    else{
        cout<<"It is not toeplitz matrix "<<endl;
    }
    return 0;
}