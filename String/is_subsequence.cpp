#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isSubsequence(string pattern, string str)
{
    bool charFound = false;
    int i = 0, j = 0;
    if (pattern.size() && !str.size())
        return false;
    for (char ch : pattern)
    {
        i++;
        charFound = false;
        while ((j <= str.size() - 1))
        {
            if (str[j++] == ch)
            {
                charFound = true;
                break;
            }
        }
        if (!charFound)
        {
            return false;
        }
    }

    return i == pattern.size() ? true : false;
}

int main(int argc, char **argv)
{
    string s1 = "abc", t1 = "ahbgdc";
    string s2 = "axc", t2 = "ahbgdc";
    string s3 = "abc", t3 = "";
    string s4 = "aaaaaa", t4 = "bbaaaa";

    bool result = isSubsequence(s4, t4);
    cout << "result" << result;
    return 0;
}