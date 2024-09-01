#include<iostream>
using namespace std;
int fir_occ_ind(string haystack, string needle){
    int n = haystack.size();
    int m = needle.size();
    if(m==0){
        return 0;
    }
    if(n<m){
        return -1;
    }
    for(int i=0; i<n; i++){
        if(haystack[i]==needle[0]){
            if(haystack.substr(i,m)==needle){
                return i;
            }
        }
    }
    return -1;
}
int main(){
    string haystack;
    string needle;
    cout<<"enter haystack->";
    cin>>haystack;
    cout<<endl;
    cout<<"enter needle->";
    cin>>needle;
    cout<<endl;
    int ans = fir_occ_ind(haystack,needle);
    cout<<ans;
    return 0;
}