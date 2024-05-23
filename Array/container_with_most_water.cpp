#include <bits/stdc++.h>
#include <math.h>
#include <iostream>
using namespace std;

#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int maxArea(vector<int> &height)
{
    int maxArea = -1;
    int first = 0, last = height.size() - 1;
    while (first < last)
    {
        int minHeight = MIN(height[first], height[last]);
        int width = last - first;
        int area = (minHeight * width);
        if (area > maxArea)
            maxArea = area;

        if (minHeight == height[first])
            first++;
        else
            last--;
    }
    return maxArea;
}

int main(int argc, char **argv)
{
    vector<int> v1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    vector<int> v2 = {1, 1};
    int result = maxArea(v2);

    cout << result;
    return 0;
}