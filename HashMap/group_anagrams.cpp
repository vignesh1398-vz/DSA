#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <math.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> mp;

    for (auto x : strs)
    {
        string word = x;
        sort(word.begin(), word.end());
        mp[word].push_back(x);
    }

    vector<vector<string>> ans;
    for (auto x : mp)
    {
        ans.push_back(x.second);
    }
    return ans;
}

int main(int argc, char **argv)
{
    vector<string> str1 = {"eat",
                           "tea",
                           "tan",
                           "ate",
                           "nat",
                           "bat"};
    vector<string> str2 = {""};
    vector<string> str3 = {"a"};
    vector<string> str4 = {"tho", "tin", "erg", "end", "pug", "ton", "alb", "mes", "job", "ads", "soy", "toe", "tap", "sen", "ape", "led", "rig", "rig", "con", "wac", "gog", "zen", "hay", "lie", "pay", "kid", "oaf", "arc", "hay", "vet", "sat", "gap", "hop", "ben", "gem", "dem", "pie", "eco", "cub", "coy", "pep", "wot", "wee"};
    vector<vector<string>> result = groupAnagrams(str4);

    for (auto arr : result)
    {
        for (string str : arr)
        {
            cout << str << ", ";
        }
        cout << endl;
    }
    return 0;
}