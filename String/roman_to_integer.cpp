#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

int romanToInt(string str)
{
    int result = 0, temp = 0;
    map<char, int> mp;
    mp.insert({'I', 1});
    mp.insert({'V', 5});
    mp.insert({'X', 10});
    mp.insert({'L', 50});
    mp.insert({'C', 100});
    mp.insert({'D', 500});
    mp.insert({'M', 1000});

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'I' && str[i + 1] && (str[i + 1] == 'V' || str[i + 1] == 'X'))
        {
            temp = mp[str[i + 1]] - mp[str[i]];
            result = result + temp;
            i++;
        }
        else if (str[i] == 'X' && str[i + 1] && (str[i + 1] == 'L' || str[i + 1] == 'C'))
        {
            temp = mp[str[i + 1]] - mp[str[i]];
            result = result + temp;
            i++;
        }
        else if (str[i] == 'C' && str[i + 1] && (str[i + 1] == 'D' || str[i + 1] == 'M'))
        {
            temp = mp[str[i + 1]] - mp[str[i]];
            result = result + temp;
            i++;
        }
        else
        {
            result = result + mp[str[i]];
        }
    }
    return result;
}

int main()
{
    string str1 = "III";
    string str2 = "LVIII";
    string str3 = "MCMXCIV";

    int result = romanToInt(str3);
    cout << result;
    return 0;
}