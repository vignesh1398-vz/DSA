#include<bits/stdc++.h>
using namespace std;

bool is_permutation(string a, string b) {
    map<char, int> mp;
    for(auto ch: a) {
        if(mp.find(ch) != mp.end())
            mp[ch]++;
        else   
            mp.insert({ ch, 1 });
    }

    for(auto ch: b) {
        if(mp.find(ch) != mp.end())
            mp[ch]--;
        else 
            return false;
    }

    for(auto it = mp.begin(); it != mp.end(); it++) {
        if(it->second != 0)
            return false;
    }

    return true;
}

int main(int argc, char** argv) {
    string str1 = "abcd";
    string str2 = "dabcd";

    cout << is_permutation(str1, str2);

    return 0;
}