#include<iostream>
#include<vector>
using namespace std;
vector<string> fizz_buzz(int n){
    vector<string> ans;
    for(int i=1; i<=n; i++){
        if(i%3==0 && i%5==0){
            ans.push_back("FizzBuzz");
        }
        else if(i%3==0){
            ans.push_back("Fizz");
        }
        else if(i%5==0){
            ans.push_back("Buzz");
        }
        else{
            ans.push_back(to_string(i));
        }
    }
    return ans;
}
int main(){
    int n = 3;
    vector<string> result = fizz_buzz(n);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}