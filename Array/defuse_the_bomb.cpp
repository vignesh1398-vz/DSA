#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> decrypt(vector<int> &code, int k)
{
    vector<int> result;
    for (int i = 0; i < code.size(); i++)
    {
        int n = code.size();
        int sum = 0;
        if (k == 0)
            result.push_back(0);
        else if (k > 0)
        {
            for (int j = 1; j <= k; j++)
            {
                int pos = (i + j) % n;
                sum += code[pos];
            }
            result.push_back(sum);
        }
        else if (k < 0)
        {
            int maxLen = abs(k);
            for (int j = 1; j <= maxLen; j++)
            {
                int pos = (n + i - j) % n;
                sum += code[pos];
            }
            result.push_back(sum);
        }
    }
    return result;
}

int main(int argc, char **argv)
{
    int k = -2;
    vector<int> vect = {2, 4, 9, 3};
    vector<int> result = decrypt(vect, k);
    for (auto it = result.begin(); it != result.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}