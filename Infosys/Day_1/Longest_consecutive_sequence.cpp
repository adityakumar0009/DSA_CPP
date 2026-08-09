#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int longest_consecutive_sequences(vector<int>& arr){
    unordered_set<int> s;
    for(int i=0; i<arr.size(); i++){
        s.insert(arr[i]);
    }
    int count = 0;
    for(auto x : s){
        if(s.find(x-1)==s.end()){
            int curr = x;
            int len = 1;
            while (s.find(curr + 1) != s.end()) {
                    curr++;
                    len++;
                }
                count = max(count, len);
        }
    }
    return count;
}
int main(){
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    cout<<" longest consecutive sequence is "<<longest_consecutive_sequences(arr);
    return 0;
}