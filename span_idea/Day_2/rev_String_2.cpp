#include<iostream>
using namespace std;
string rev_str(string& s,int k){
    int n = s.size();
    for(int i=0; i<n; i+=2*k){
        int left = i;
        int right = min(i+k-1,n-1);
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
    return s;
}
int main(){
    string s = "abcdefg";
    int k = 2;
    cout<<"After rev string become "<<rev_str(s,k);
    return 0;
}