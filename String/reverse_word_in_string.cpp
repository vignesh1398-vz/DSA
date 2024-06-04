#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

string reverseWords(string s)
{
    string result = "";
    int i = s.size() - 1, j = s.size() - 1;

    while (i >= 0)
    {
        while (i >= 0 && s[i] == ' ')
        {
            i--;
            cout << "";
        }

        // loop until space is found.
        for (j = i; (j >= 0 && s[j] != ' ');)
        {
            j--;
            cout << 'J' << j << endl;
        }

        cout << "Outside J Loop" << j;
        cout << "Outside I Loop" << i;
        for (int k = j + 1; k <= i; k++)
        {
            cout << s[k];
        }
    }

    return result;
}

int main(int argc, char **argv)
{
    string str1 = "the sky is blue";
    string result = reverseWords(str1);
    cout << result;
    return 0;
}