#include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int majorityElement = nums[0];
    int voteCount = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == majorityElement)
        {
            voteCount++;
        }
        else
        {
            voteCount--;
            if (voteCount == 0)
            {
                majorityElement = nums[i];
                voteCount = 1;
            }
        }
    }

    return majorityElement;
}

int main(int argc, char **argv)
{
    vector<int> nums1 = {2, 2, 1, 1, 1, 2, 2};
    vector<int> nums2 = {3, 2, 3};
    int result = majorityElement(nums2);
    cout << result;
    return 0;
}