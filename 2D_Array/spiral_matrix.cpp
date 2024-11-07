#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &mat)
{
    vector<int> ans;
    int m = mat.size();
    int n = mat[0].size();
    int srow = 0;
    int scol = 0;
    int erow = m - 1;
    int ecol = n - 1;

    while (srow <= erow && scol <= ecol)
    {
        // Top row
        for (int j = scol; j <= ecol; j++)
        {
            ans.push_back(mat[srow][j]);
        }
        // Right column
        for (int i = srow + 1; i <= erow; i++)
        {
            ans.push_back(mat[i][ecol]);
        }
        // Bottom row
        for (int j = ecol - 1; j >= scol; j--)
        {
            if (srow == erow)
            {
                break;
            }
            ans.push_back(mat[erow][j]);
        }
        // Left column
        for (int i = erow - 1; i > srow; i--)
        {
            if (scol == ecol)
            {
                break;
            }
            ans.push_back(mat[i][scol]);
        }

        srow++;
        erow--;
        scol++;
        ecol--;
    }

    return ans;
}
int main(){
    vector<vector<int>> mat = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};
    vector<int> result = spiralOrder(mat);
    // Print the result
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}