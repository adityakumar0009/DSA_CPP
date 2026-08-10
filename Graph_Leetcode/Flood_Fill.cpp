#include<iostream>
#include<vector>
using namespace std;
void dfs(vector<vector<int>>& image,int i,int j,int new_color,int orignal_color){
    int m = image.size();
    int n = image[0].size();
    if(i<0 || j<0 || i>=m || j>=n || image[i][j]==new_color || image[i][j]!=orignal_color){
        return ;
    }
    image[i][j] = new_color;
    dfs(image,i-1,j,new_color,orignal_color);//top
    dfs(image,i+1,j,new_color,orignal_color);//bottom
    dfs(image,i,j+1,new_color,orignal_color);//right
    dfs(image,i,j-1,new_color,orignal_color);//left;
}
vector<vector<int>> flood_fill(vector<vector<int>> image,int sr,int sc,int color){
    dfs(image,sr,sc,color,image[sr][sc]);
}
int main(){
    vector<vector<int>> image = { {1, 1, 1},
                                  {1, 1, 0}, 
                                  {1,0,1} };
    int sr = 1;
    int sc = 1;
    int color = 2;
    vector<vector<int>> result = flood_fill(image,sr,sc,color);
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[0].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }                              
    return 0;
}