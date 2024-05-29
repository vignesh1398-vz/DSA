#include <bits/stdc++.h>
#include <stack>
#include <map>
#include <iostream>

using namespace std;

bool isValid(string s)
{
    stack<char> st;
    map<char, char> opening;

    opening.insert({'(', ')'});
    opening.insert({'{', '}'});
    opening.insert({'[', ']'});

    for (auto ch : s)
    {
        if (opening.find(ch) != opening.end())
        {
            st.push(ch);
        }
        else if (st.size() && opening[st.top()] == ch)
        {
            st.pop();
        }

        else
            st.push(ch);
    }
    return st.size() == 0;
}

int main(int argc, char **argv)
{
    string s1 = "()";
    string s2 = "()[]{}";
    string s3 = "(]";
    string s4 = "]";

    bool result = isValid(s4);
    cout << result;
    return 0;
}