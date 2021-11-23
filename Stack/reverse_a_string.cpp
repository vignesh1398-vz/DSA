#include<bits/stdc++.h>
using namespace std;

string reverseUsingStack(string str) {
    stack <char> st;
    string result = "";

    for(char c : str) {
        st.push(c);
    }

    while(!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;
}

string reverseWithoutStack(string str) {
    for(int i = 0; i < str.size() / 2; i++) {
        swap(str[i], str[str.size() - i - 1]);
    }

    return str;
}

int main(int argc, char** argv) {
    string str;

    cout << "Enter string: ";
    cin >> str;
    cout << "The reversed string is : " << reverseUsingStack(str) << endl;
    cout << "The reversed string is: " << reverseWithoutStack(str);
    return 0;
}