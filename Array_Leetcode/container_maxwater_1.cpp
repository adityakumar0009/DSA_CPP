#include<iostream>
#include<vector>
using namespace std;
int max_water(vector<int>& arr){
    int max_water = 0;
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            int wid = j-i;
            int ht = min(arr[i],arr[j]);
            int area = wid*ht;
            ans = max(ans,area);
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout<<"maximum water container is "<<max_water(arr)<<endl;
    return 0;
}