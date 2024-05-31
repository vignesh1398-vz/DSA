#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> result;
    int rowsNum = matrix.size();
    int colsNum = matrix[0].size();
    int left = 0, right = colsNum - 1, top = 0, bottom = rowsNum - 1;

    while (left <= right && top <= bottom && result.size() < (rowsNum * colsNum))
    {
        // left to right
        for (int j = left; j <= right; j++)
        {
            // cout << matrix[top][j] << endl;
            if (result.size() < (rowsNum * colsNum))
                result.push_back(matrix[top][j]);
        }
        top++;

        // right to bottom
        for (int i = top; i <= bottom; i++)
        {
            if (result.size() < (rowsNum * colsNum))
                result.push_back(matrix[i][right]);
        }
        right--;

        // bottom to left
        for (int j = right; j >= left; j--)
        {
            if (result.size() < (rowsNum * colsNum))
                result.push_back(matrix[bottom][j]);
        }
        bottom--;

        // left to top
        for (int i = bottom; i >= top; i--)
        {
            if (result.size() < (rowsNum * colsNum))
                result.push_back(matrix[i][left]);
        }
        left++;
    }

    // cout << rowsNum << colsNum;
    return result;
}

int main(int argc, char **argv)
{
    vector<vector<int>> m1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    vector<int> result = spiralOrder(m1);
    for (auto it : result)
    {
        cout << it << "->" << endl;
    }
    return 0;
}