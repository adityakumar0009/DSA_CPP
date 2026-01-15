#include<iostream>
#include<vector>
using namespace std;
vector<bool> kids_with_candies(vector<int>& candies,int extra_candies){
    int n = candies.size();
    int max_candy = 0;
    for(int i=0; i<n; i++){
        max_candy = max(max_candy,candies[i]);
    }
    vector<bool> result(n,false);
    for(int i=0; i<n; i++){
        if(candies[i]+extra_candies>=max_candy){
            result[i] = true;
        }
    }
    return result;
}
int main(){
    vector<int> candies = {2, 3, 5, 1, 3};
    int extra_candies = 3;
    vector<bool> ans = kids_with_candies(candies,extra_candies);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}