#include <bits/stdc++.h>
#include <map>
#include <iostream>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, int> mp;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(target - nums[i]) != mp.end())
        {
            result.push_back(i);
            result.push_back(mp[target - nums[i]]);
        }
        else
        {
            mp.insert({nums[i], i});
        }
    }
    return result;
}

int main(int argc, char **argv)
{
    vector<int> nums1 = {2, 7, 11, 15};
    vector<int> nums2 = {3, 2, 4};
    vector<int> nums3 = {3, 3};

    int target1 = 9;
    int target2 = 6;
    int target3 = 6;

    // vector<int> result = twoSum(nums1, target1);
    vector<int> result = twoSum(nums3, target3);
    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}
