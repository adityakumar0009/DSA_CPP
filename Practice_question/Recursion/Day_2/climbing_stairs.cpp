#include <iostream>
using namespace std;
int climb_str(int n){
    //base case
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    //recursive call
    return climb_str(n-1)+climb_str(n-2);

}
int main(){
    int n;
    cout<<"no of ways->";
    cin>>n;
    int ans = climb_str(n);
    cout<<ans;
    return 0;
}