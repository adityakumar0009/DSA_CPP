#include<iostream>
#include<vector>
using namespace std;
vector<bool> Kids_with_candies(vector<int>& candies,int extraCandies){
    int n = candies.size();
    int max_candy = 0;
    for(int i=0; i<n; i++){
        max_candy = max(max_candy,candies[i]);
    }
    vector<bool> result(n,false);
    for(int i=0; i<n; i++){
        if(candies[i]+extraCandies>=max_candy){
            result[i] = true;
        }
    }
    return result;
}
int main(){
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    return 0;
}