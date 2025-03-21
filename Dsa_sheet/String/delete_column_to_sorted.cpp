#include<iostream>
#include<vector>
using namespace std;
int minDeletionsize(vector<string>& strs){
    int n = strs.size();
    int k = strs[0].size();
    int count = 0;
    for(int j=0; j<k; j++){
        for(int i=1; i<n; i++){
            if(strs[i][j]<strs[i-1][j]){
                count++;
                break;
            }
        }
    }
    return count;
}
int main(){
    vector<string> strs = {"cba", "daf", "ghi"};
    int ans = minDeletionsize(strs);
    cout<<"the deleted column to sorted is -> "<<ans;
    return 0;
}