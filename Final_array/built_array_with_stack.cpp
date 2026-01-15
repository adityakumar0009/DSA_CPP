#include<iostream>
#include<vector>
using namespace std;
vector<string> build_array(vector<int>& target,int num){
    int i = 0;
    int n = target.size();
    vector<string> result;
    int stream = 1;
    while(i<n && stream<=num){
        result.push_back("push");
        if(target[i]==stream){
            i++;
        }
        else{
            result.push_back("Pop");
        }
        stream++;
    }
    return result;
}
int main(){
    vector<int> target = {1,3};
    int num = 3;
    vector<string> ans = build_array(target,num);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}