#include<iostream>
using namespace std;
int addget(int arr[],int size){
    //base
    if(size==0)
    return 0;
    if(size == 1)
    return arr[0];

    int remainingpart = addget(arr+1,size-1);
    int sum = arr[0]+remainingpart;
    return sum;

}
int main(){
    int arr[5]={2,4,6,8,7};
    int size = 5;
    int ans = addget(arr,size);
    cout<<ans<<endl;
    return 0;
}