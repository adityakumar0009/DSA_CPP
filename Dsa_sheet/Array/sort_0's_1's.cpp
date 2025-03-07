#include<iostream>
#include<vector>
using namespace std;
int sort_0_1(vector<int> &nums){
    int mid = 0;
    int low = 0;
    int high = 0;
    while (mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            mid++;
            low++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[high],nums[mid]);
            high--;
        }
    }
    
}
int main(){
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    cout<<"sorted_array_is ->"<<sort_0_1(nums);
    return 0;
}
// dnf :- dutch national flag