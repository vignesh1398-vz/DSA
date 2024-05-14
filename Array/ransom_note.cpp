#include <bits/stdc++.h>
#include <map>
#include <iostream>

using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
    map<char, int> mp;

    /* Dictionary population*/
    for (char ch : magazine)
    {
        if (mp.find(ch) == mp.end())
        {
            mp.insert({ch, 1});
        }
        else
        {
            mp[ch]++;
        }
    }

    for (char ch : ransomNote)
    {
        if (mp.find(ch) != mp.end())
        {
            mp[ch]--;
            if (mp[ch] < 0)
                return false;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char **argv)
{
    string ransomNote1 = "a", magazine1 = "b";
    string ransomNote2 = "aa", magazine2 = "ab";
    string ransomNote3 = "aa", magazine3 = "aab";
    bool result = canConstruct(ransomNote3, magazine3);
    cout << result;
    return 0;
}