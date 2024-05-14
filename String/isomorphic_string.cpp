#include <bits/stdc++.h>
#include <map>
#include <iostream>
using namespace std;

bool isIsomorphic(string s, string t)
{
    map<char, char> mp1;
    map<char, char> mp2;

    if (s.length() != t.length())
        return false;

    for (int i = 0; i < s.length(); i++)
    {
        if (
            (mp1[s[i]] || mp2[t[i]]) &&
            (mp1[s[i]] != t[i] || mp2[t[i]] != s[i]))
        {
            return false;
        }

        else
        {
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }
    }

    return true;
}

int main(int argc, char **argv)
{
    string s1 = "egg", t1 = "add";
    string s2 = "foo", t2 = "bar";
    string s3 = "paper", t3 = "title";
    string s = "bbbaaaba", t = "aaabbbba";
    bool result = isIsomorphic(s, t);
    cout << result;
    return 0;
}