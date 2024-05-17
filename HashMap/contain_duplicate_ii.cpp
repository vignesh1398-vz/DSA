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

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        // displayMap(mp);
        if (mp.find(nums[i]) == mp.end())
        {
            mp.insert({nums[i], i});
        }
        // hit case
        else if (abs(i - mp[nums[i]]) <= k)
        {
            return true;
        }
        else
        {
            mp[nums[i]] = i;
        }
    }
    return false;
}

int main(int argc, char **argv)
{
    vector<int> v1 = {1, 2, 3, 1};
    vector<int> v2 = {1, 0, 1, 1};
    vector<int> v3 = {1, 2, 3, 1, 2, 3};

    int k1 = 3;
    int k2 = 1;
    int k3 = 2;

    bool result = containsNearbyDuplicate(v1, k1);
    // bool result = containsNearbyDuplicate(v2, k2);
    // bool result = containsNearbyDuplicate(v3, k3);

    cout << "Result" << result;
    return 0;
}