#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <math.h>

using namespace std;

void displayMap(map<string, char> mp)
{
    for (auto it : mp)
    {
        cout << it.first << "->" << it.second << endl;
    }
}

vector<string> customSplit(string str, char separator)
{
    vector<string> strings;
    int startIndex = 0, endIndex = 0;
    for (int i = 0; i <= str.size(); i++)
    {

        // If we reached the end of the word or the end of the input.
        if (str[i] == separator || i == str.size())
        {
            endIndex = i;
            string temp;
            temp.append(str, startIndex, endIndex - startIndex);
            strings.push_back(temp);
            startIndex = endIndex + 1;
        }
    }
    return strings;
}

void displayString(vector<string> v1)
{
    for (auto str : v1)
    {
        cout << str << " ";
    }
    cout << endl;
}

bool wordPattern(string pattern, string s)
{
    map<char, string> mp1;
    map<string, char> mp2;

    vector<string> v = customSplit(s, ' ');
    // displayString(v);
    if (pattern.size() != v.size())
        return false;
    for (int i = 0; i < pattern.size(); i++)
    {
    }
    return true;
}

int main(int argc, char **argv)
{
    string pattern1 = "abba", s1 = "dog cat cat dog";
    string pattern2 = "abba", s2 = "dog cat cat fish";
    string pattern3 = "abba", s3 = "dog dog dog dog";
    bool result = wordPattern(pattern3, s3);
    cout << "Result: " << result;
    return 0;
}