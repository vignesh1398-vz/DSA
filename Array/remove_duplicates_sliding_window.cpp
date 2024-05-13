#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    int k = 0, i = 0, j = 1;
    while (j < n)
    {
        if (nums[i] == nums[j])
            j++;
        else
        {
            nums[++k] = nums[j];
            i = j;
            j = i + 1;
        }
    }
    return k + 1;
}

int main(int argc, char **argv)
{
    vector<int> v1 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int result = removeDuplicates(v1);
    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << result;
    return 0;
}