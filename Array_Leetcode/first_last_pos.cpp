#include<iostream>
#include<vector>
using namespace std;
int first_pos(vector<int>& nums,int target){
    int left = 0;
    int right = nums.size()-1;
    int first = -1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(nums[mid]==target){
            first = mid;
            right = mid-1;
        }
        else if(nums[mid]<target){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return first;
}

int second_pos(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    int last = -1;
    while (left <= right)
    {
        int mid = left + (right-left) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            left = mid + 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return last;
}
vector<int> search_range(vector<int>& nums,int target){
    return{first_pos(nums,target),second_pos(nums,target)};
}
int main(){
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = search_range(nums, target);
    cout << "First and last position of " << target << ": ";
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
    return 0;
}