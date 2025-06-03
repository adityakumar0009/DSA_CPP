#include<iostream>
#include<vector>
using namespace std;
bool two_search(vector<vector<int>>& nums,int target){
    int row = nums.size();
    int column = nums[0].size();
    int st = 0;
    int end = row*column -1;
    while(st<=end){
        int mid = st+(end-st)/2;
        int element = nums[mid/column][mid%column];
        if(element==target){
            return true;
        }
        if(element<target){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> nums = { {1, 3, 5, 7},
                                {10, 11, 16, 20},
                                 {23, 30, 34, 60}
                                };
    int target = 34;
    if(two_search(nums,target)){
        cout<<"element is found " <<endl;
    }
    else{
        cout<<"element is not found "<<endl;
    }
    return 0;
}