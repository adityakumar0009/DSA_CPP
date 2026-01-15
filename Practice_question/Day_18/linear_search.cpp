#include<iostream>
using namespace std;
int main(){
    int arr[5] = {3,6,5,9,5};
    int target;
    cout <<"enter the target->"<< endl;
    cin >> target;

    for(int i =0;i<5;i++){
        if(arr[i] == target){
            cout<<"Element is found"<<endl;
            return 0;
        }
    }
    cout <<"Element not found"<<endl;
    return 0;
}
