#include<iostream>
using namespace std;
int main(){
    int nums[] = {4,3,6,2,-11};
    int size = 5;
    int smallest = INT64_MAX;
    for(int i=0; i<size; i++){
        if(nums[i]<smallest) //smallest = min(nums[i],smallest);
        smallest = nums[i];
    }
    cout<<"the smallest number is->"<<smallest;
    return 0;
}