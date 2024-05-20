#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <math.h>

using namespace std;

void displayMap(map<int, int> mp)
{
    for (auto it : mp)
    {
        cout << it.first << "->" << it.second << endl;
    }
}

int longestConsecutive(vector<int> &nums)
{
    int maxCount = 1, count = 1;
    if (nums.size() == 0)
        return 0;
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(nums[i]) == mp.end())
        {
            mp.insert({nums[i], i});
        }
    }

    for (auto it : mp)
    {
        cout << it.first << endl;
        // hit
        if (mp.find(it.first + 1) != mp.end())
        {
            count++;
            if (count > maxCount)
            {
                maxCount = count;
            }
        }
        else
        {
            count = 1;
        }
    }

    return maxCount;
}

int main(int argc, char **argv)
{
    vector<int> v1 = {100, 4, 200, 1, 3, 2};
    vector<int> v2 = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    vector<int> v3 = {9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};
    vector<int> v4 = {1, 0, -1};

    int result = longestConsecutive(v4);
    // bool result = containsNearbyDuplicate(v2, k2);
    // bool result = containsNearbyDuplicate(v3, k3);

    cout << "Result" << result;
    return 0;
}