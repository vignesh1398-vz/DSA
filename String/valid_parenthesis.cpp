#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    stack<char> st;
    bool flag = true;
    map<char, char> openMap = {
        {'(', ')'},
        {'{', '}'},
        {'[', ']'}
    };
    map<char, char> closeMap = {
        {')', '('},
        {'}', '{'},
        {']', '['}
    };
    cout << "Enter string: " << endl;
    getline(cin, str);

    for(auto ch: str) {
        if(openMap.find(ch) != openMap.end()) {
            st.push(ch);
        }
        else if(st.size() && closeMap[ch] && closeMap[ch] == st.top()) {
            st.pop();
        }
        else {
            flag = false;
            break;
        }
    }

    cout << st.empty();    
    return 0;
}