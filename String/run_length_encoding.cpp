#include<bits/stdc++.h>
using namespace std;

string compress(string text) {
    string output;
    int count = 1;
    for(int i = 0; i < text.size(); i++) {
        count = 1;
        while(i < text.size() - 1 && text[i] == text[i + 1]) {
            count++;
            i++;
        }
        output = output + text[i];
        output = output + to_string(count);
    }

    return (output.size() > text.size()) ? text : output; 
}

int main(int argc, char** argv) {
    string str1 = "aaaabbcefaaaaab";
    string str2 = "abcdddddd";

    cout << compress(str1) << endl;
    cout << compress(str2) << endl;

    return 0;
}