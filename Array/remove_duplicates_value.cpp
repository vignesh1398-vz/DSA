#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int result = 0;
    map<int, int> mp;
    for (auto num : nums)
    {
        if (num != val)
        {
            result++;
            if (mp.find(num) == mp.end())
            {
                mp.insert({num, 1});
            }
            else
            {
                mp[num]++;
            }
        }
    }

    nums.clear();
    for (auto it : mp)
    {
        // cout << "it->second" << it.second;
        while (it.second--)
        {
            nums.push_back(it.first);
        }
    }
    return result;
}

int main(int argc, char **argv)
{
    vector<int> nums1 = {3, 2, 2, 3};
    vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val1 = 2;
    int val2 = 2;

    int result = removeElement(nums2, val2);
    cout << "Result" << result << endl;
    return 0;
}