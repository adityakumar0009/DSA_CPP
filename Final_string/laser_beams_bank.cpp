#include<iostream>
#include<vector>
using namespace std;
int no_beams(vector<string>& banks){
    int prev_beam = 0;
    int result = 0;
    for(int i=0; i<banks.size(); i++){
        int curr_beam = 0;
        for(int j=0; j<banks[i].size(); j++){
            if(banks[i][j]=='1'){
                curr_beam++;
            }
        }
        result+=(curr_beam*prev_beam);
        if(curr_beam!=0){
            prev_beam = curr_beam;
        }
    }
    return result;
}
int main(){
    vector<string> banks = {"011001", "000000", "010100", "001000"};
    cout << "Number of Laser Beams in a Bank "<<no_beams(banks);
    return 0;
}