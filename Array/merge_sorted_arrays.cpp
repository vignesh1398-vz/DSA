#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge_sorted_array(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int last = m + n - 1;
    int i = m - 1;
    int j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[last--] = nums1[i--];
        }
        else
        {
            nums1[last--] = nums2[j--];
        }
    }

    while (j >= 0)
    {
        nums1[last--] = nums2[j--];
    }
}

int main(int argc, char *argv[])
{
    vector<int> nums1{1, 2, 3, 0, 0, 0};
    vector<int> nums2{2, 5, 6};
    merge_sorted_array(nums1, 3, nums2, 3);
    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << endl;
    }
    cout << "Hello World";
    return 0;
}
