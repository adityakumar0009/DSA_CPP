#include<iostream>
using namespace std;
int intersection(int arr1[], int x, int arr2[], int y){
    int common = 0;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            if(arr1[i]==arr2[j]){
                common++;
            }
        }
    }
    return common;
}
int main(){
    int arr1[] = {1,2,3,4};
    int x = 4;
    int arr2[] = {2,3,4};
    int y =3;
    int ans = intersection(arr1,x,arr2,y);
    cout<<"intersection is->"<<ans<<" ";
    return 0;
}