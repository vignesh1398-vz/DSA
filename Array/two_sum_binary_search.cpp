#include <bits/stdc++.h>
#include <map>
#include <iostream>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int left = 0;
    int right = numbers.size() - 1;

    while (left < right)
    {
        int total = numbers[left] + numbers[right];

        if (total == target)
        {
            return {left + 1, right + 1};
        }
        else if (total > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    return {-1, -1}; // If no solution is found
}

int main(int argc, char **argv)
{
    vector<int> nums1 = {2, 7, 11, 15};
    vector<int> nums2 = {2, 3, 4};
    vector<int> nums3 = {-1, 0};
    vector<int> nums4 = {5, 25, 75};
    vector<int> nums5 = {1, 2, 3, 4, 4, 9, 56, 90};

    int target1 = 9;
    int target2 = 6;
    int target3 = -1;
    int target4 = 100;
    int target5 = 8;

    // vector<int> result = twoSum(nums1, target1);
    vector<int> result = twoSum(nums5, target5);
    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}
