#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Solution{
    private:
    bool knows(vector<vector<int>> &m, int a, int b,int n){
        if(m[a][b]==1){
            return true;
        }
        else{
            return false;
        }
    }
    public:
    stack<int> s;
    int celebrity(vector<vector<int>> &m, int n)
    {
        //step 1
        for(int i=0; i<n; i++){
            s.push(i);
        }
        //step 2
        while(s.size()>1){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if(knows(m,a,b,n)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        int candidate = s.top();
        //step 3
        //single element in stack is potential stack
        int zerocount = 0;
        bool rowCheck = false;
        for(int i=0; i<n; i++){
            if(m[candidate][i]==0){
                zerocount++;
            }
        }
        //all zeros
        if(zerocount==n){
            rowCheck = true;
        }

        //column check
        int onecount = 0;
        bool colCheck = false;
        for (int i = 0; i < n; i++)
        {
            if (m[i][candidate] == 1)
            {
                onecount++;
            }
        }
        if (onecount == n-1)
        {
            colCheck = true;
        }
        if(rowCheck == true && colCheck==true){
            return candidate;
        }
        else{
            return -1;
        }
    }
};
int main(){
    Solution sol;
    vector<vector<int>> m = {{0,1,0},
                             {0,0,0},
                             {0,1,0}};
    int n = m.size();
    int result = sol.celebrity(m,n);
    if(result==-1){
        cout<<"celebrity not found"<<endl;
    }                        
    else{
        cout<<"celebrity found at index ->"<<result<<" ";
    }
    return 0;
}