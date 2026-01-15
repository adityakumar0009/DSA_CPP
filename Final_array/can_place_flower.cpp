#include<iostream>
#include<vector>
using namespace std;
bool can_place_flower(vector<int>& flowerbed,int n){
    int l = flowerbed.size();
    if(l==0){
        return true;
    }
    for(int i=0; i<l; i++){
        if(flowerbed[i]==0){
            bool left_khali = (i==0) || (flowerbed[i-1]==0);
            bool right_khali = (i==l-1) || (flowerbed[i+1]==0);
            if(left_khali && right_khali){
                flowerbed[i] = 1;
                n--;
                if(n==0){
                    return true;
                }
            }
        }
    }
    return false;
}
int main(){
    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;
    if(can_place_flower(flowerbed,n)){
        cout<<"Flowers can place"<<endl;
    }
    else{
        cout<<"Flower cannot place"<<endl;
    }
    return 0;
}