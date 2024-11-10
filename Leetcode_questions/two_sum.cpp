#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> two_sum(vector<int> &arr, int target){
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=0; i<arr.size(); i++){
        int first = arr[i];
        int second = target-first;
        if(m.find(second) != m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first] = i;
    }
    return ans;
}
int main(){
    vector<int> arr = {2,7,11,15};
    int target = 9;
    vector<int> res = two_sum(arr,target);
    if(!res.empty()){
        cout<<" "<<res[0]<<" "<<res[1];
    }
    else{
        cout<<"sum not found"<<endl;
    }
    return 0;
}