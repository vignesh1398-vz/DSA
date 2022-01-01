#include<bits/stdc++.h>
using namespace std;

string remove_duplicates(string str) {
    map<char, int> mp;
    string output;
    for(auto ch: str) {
        if(mp.find(ch) != mp.end())
            mp[ch]++;
        else {
            mp.insert({ ch, 1 });
            output.push_back(ch);
        }
    }
    sort(output.begin(), output.end());
    return output;
}

int main(int argc, char** argv) {
    string str1 = "aaavbcdd";
    string str2 = "dabvvasdadascd";

    cout << remove_duplicates(str1) << endl;
    cout << remove_duplicates(str2) << endl;

    return 0;
}