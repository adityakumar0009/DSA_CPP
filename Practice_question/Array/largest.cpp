#include<iostream>
using namespace std;
int main(){
    int nums[] = {2,4,5,1,0};
    int size = 5;
    int largest = INT64_MIN;
    for(int i=0; i<size; i++){
        if(nums[i]>largest){ //max(nums[i],largest)
            largest = nums[i]; 
        }
    }
    cout<<"the largest number is->"<<largest<<endl;
    return 0;
}