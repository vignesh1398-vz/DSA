#include <bits/stdc++.h>
using namespace std;

bool isSpace(char ch) {
    return ch == ' ';
}

int main() {
    string str;
    int result = 0;

    cout << "Enter string: ";
    cin >> str;

    for (int i = str.size() - 1; i >= 0; i--) {
        if(isSpace(str[i]) && result > 0)  break;
        else if(!isSpace(str[i])) result ++;
    }

    cout << result;
    return 0;
}