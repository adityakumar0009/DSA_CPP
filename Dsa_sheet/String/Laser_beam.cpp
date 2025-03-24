#include<iostream>
#include<vector>
using namespace std;
int laser_beam(vector<string>& bank){
    int prev_beam = 0;
    int result = 0;
    int n = bank.size();
    for(int i=0; i<n; i++){
        int curr_beam = 0;
        for(char& ch: bank[i]){
            if(ch=='1'){
                curr_beam++;
            }
        }
        result+=(prev_beam*curr_beam);
        if(curr_beam!=0){
            prev_beam = curr_beam;
        }
    }
    return result;
}
int main(){
    vector<string> bank = {"011001", "000000", "010100", "001000"};
    cout<<"no of laser beam is -> "<<laser_beam(bank);
    return 0;
}