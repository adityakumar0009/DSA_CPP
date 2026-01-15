#include<iostream>
using namespace std;
void solve(int nums,int ans, int index){
    //base case 
    private:
    if(index>=nums.size()){
        ans.push_back(ans);
        return ;
    }
    for(int j=index; j<nums.size(); j++){
        swap(nums[index],nums[j]);
        solve(nums,ans,index+1);
        //backtrack
         swap(nums[index],nums[j]);
    }
};
int main()
{   
    int ans;
    int index =0;
    solve(nums,ans,index);
    return ans;
}