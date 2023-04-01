#include<bits/stdc++.h>
using namespace std;

int main() {
    int result = 0, temp = 0;
    map<char, int> mp = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str);

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'I' && str[i+1] && ( str[i+1] == 'V' || str[i+1] == 'X')) {
            temp = mp[str[i+1]] - mp[str[i]];
            result = result + temp;
            i++;
        }
        else if(str[i] == 'X' && str[i+1] && ( str[i+1] == 'L' || str[i+1] == 'C')) {
            temp = mp[str[i+1]] - mp[str[i]];
            result = result + temp;
            i++;
        }
        else if(str[i] == 'C' && str[i+1] && ( str[i+1] == 'D' || str[i+1] == 'M')) {
            temp = mp[str[i+1]] - mp[str[i]];
            result = result + temp;
            i++;
        }
        else {
            result = result + mp[str[i]];
        }
    }

    cout << result;

    return 0;
}