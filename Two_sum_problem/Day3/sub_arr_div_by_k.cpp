#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int sub_arr_div_k(vector<int>& num,int k){
    unordered_map<int,int> m;
    int count = 0;
    int sum  = 0;
    m[0]=1;
    for(int i=0; i<num.size(); i++){
        sum+=num[i];
        int rem = sum%k;
        if(rem<0){
            rem = rem+k;
        }
        if(m.find(rem)!=m.end()){
            count+=m[rem];
        }
        m[rem]++;
    }
    return count;
}
int main(){
    vector<int> num = {4, 5, 0, -2, -3, 1};
    int k = 5;
    cout << "the number of non-empty subarrays that have a sum divisible by k. "<<sub_arr_div_k(num,k);
    return 0;
}