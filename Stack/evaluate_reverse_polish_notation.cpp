#include <bits/stdc++.h>
#include <iostream>
#include <ctype.h>
#include <map>
#include <stack>
using namespace std;

bool is_number(const std::string &s)
{
    return !s.empty() && std::all_of(s.begin(), s.end(), ::isdigit);
}

int evaluateMath(int operand1, int operand2, int oper)
{
    int result;
    switch (oper)
    {
    case 1:
        result = operand1 + operand2;
        break;
    case 2:
        result = operand1 + operand2;
        break;
    case 3:
        result = operand1 * operand2;
        break;
    case 4:
        result = operand1 / operand2;
        break;
    default:
        break;
    }
    return result;
}

int evalRPN(vector<string> &tokens)
{
    long result;
    stack<long> st;
    map<string, int> mp;
    mp.insert({"+", 1});
    mp.insert({"-", 2});
    mp.insert({"*", 3});
    mp.insert({"/", 4});

    for (auto it = tokens.begin(); it != tokens.end(); it++)
    {
        if (is_number(*it))
        {
            st.push(stoi(*it));
        }
        /* Operator case*/
        else if (mp.find(*it) != mp.end())
        {
            long operand2 = st.top();
            st.pop();
            long operand1 = st.top();
            st.pop();
            result = evaluateMath(operand1, operand2, mp[*it]);

            st.push(result);
        }
    }
    return (int)result;
}

int main(int argc, char **argv)
{
    vector<string> token1 = {"2", "1", "+", "3", "*"};
    vector<string> token2 = {"4", "13", "5", "/", "+"};
    vector<string> token3 = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    int result = evalRPN(token3);
    cout << result;
    return 0;
}