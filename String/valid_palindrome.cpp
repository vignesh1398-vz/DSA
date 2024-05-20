#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <ctype.h>

using namespace std;

string formatString(string str)
{
    stringstream s(str);
    string result = "";
    string word;

    int count = 0;
    while (s >> word)
    {
        for (char ch : word)
        {
            if (isalnum(ch))
            {
                result.push_back(tolower(ch));
            }
        }
    }
    return result;
}

bool isPalindrome(string s)
{
    string str = formatString(s);
    cout << "Formatted string" << str << endl;
    int first = 0, last = str.size() - 1;
    while (first <= last)
    {
        if (str[first] != str[last])
            return false;
        first++;
        last--;
    }
    return true;
}

int main()
{
    string str1 = "A man, a plan, a canal: Panama";
    string str2 = "race a car";
    string str3 = " ";
    bool result = isPalindrome(str3);
    cout << result;
    return 0;
}