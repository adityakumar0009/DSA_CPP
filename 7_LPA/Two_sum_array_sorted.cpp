#include<iostream>
#include<vector>
using namespace std;
vector<int> two_sum(vector<int>& numbers,int target){
    int st = 0;
    int end = numbers.size()-1;
    while(st<end){
        int sum = numbers[st]+numbers[end];
        if(sum==target){
            return {st+1,end+1};
        }
        else if(sum<target){
            st++;
        }
        else{
            end--;
        }
    }
    return {};
}
int main(){
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = two_sum(numbers,target);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}