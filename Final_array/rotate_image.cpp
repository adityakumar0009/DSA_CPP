#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate_image(vector<vector<int>>& image){
    int m = image.size();
    int n = m;
    for(int i=0; i<m; i++){
        for(int j=i; j<n; j++){
            swap(image[i][j],image[j][i]);
        }
    }
    for(int i=0; i<m; i++){
        reverse(image[i].begin(), image[i].end());
    }
}
int main(){
    vector<vector<int>> image = {{1,2,3},{4,5,6},{7,8,9}};
    rotate_image(image);
    for(auto row : image) {
        for(auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}