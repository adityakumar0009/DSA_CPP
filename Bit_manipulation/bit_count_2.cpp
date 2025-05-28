#include <iostream>
#include <vector>
using namespace std;
vector<int> bit_count(int n)
{
    vector<int> result(n + 1);
    if(n==0){
        return result;
    }
    result[0] = 0;
    for (int i = 0; i <= n; i++)
    {
       if(i%2!=0){
        result[i] = result[i/2]+1;
       }
       else{
        result[i] = result[i/2];
       }
    }
    return result;
}
int main()
{
    int n = 3;
    vector<int> ans = bit_count(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}