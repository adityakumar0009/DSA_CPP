#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {2,7,11,13};
    vector<int> ans;
    int target = 9;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
        if (!ans.empty())
            break;
    }
    if (!ans.empty())
    {
        cout << "Indices: " << ans[0] << " and " << ans[1] << endl;
    }
    else
    {
        cout << "No two numbers sum to the target." << endl;
    }
    return 0;
}