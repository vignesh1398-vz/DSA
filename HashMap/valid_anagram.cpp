#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <math.h>

using namespace std;

bool isAnagram(string s, string t)
{
    map<char, int> mp1;
    map<char, int> mp2;
    if (s.size() != t.size())
        return false;
    for (int i = 0; i < s.size(); i++)
    {
        if (mp1.find(s[i]) == mp1.end())
        {
            mp1.insert({s[i], 1});
        }
        if (mp1.find(s[i]) != mp1.end())
        {
            mp1[s[i]]++;
        }
        if (mp2.find(t[i]) == mp2.end())
        {
            mp2.insert({t[i], 1});
        }
        if (mp2.find(t[i]) != mp2.end())
        {
            mp2[t[i]]++;
        }
    }

    for (char ch : s)
    {
        if (
            (
                (mp1[ch] && !mp2[ch]) ||
                (mp2[ch] && !mp1[ch])) ||
            (mp1[ch] != mp2[ch]))
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char **argv)
{
    string s1 = "anagram", t1 = "nagaram";
    string s2 = "rat", t2 = "car";
    bool result = isAnagram(s2, t2);
    cout << "Result" << result;
    return 0;
}