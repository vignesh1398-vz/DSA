#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    vector<int>arr = { 0,0,1,1,1,2,2,3,3,4 };
    map<int, bool> mp;
    int size = arr.size();
    int result = size;

    for(auto num: arr) {
        if(mp.find(num) == mp.end()) {
            mp.insert({num, true});
        }
    }

    arr.clear();
    for(auto it: mp) {
        arr.push_back(it.first);        
    }

    result = arr.size();
    while(arr.size() < size) {
        arr.push_back(-1);
    }

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
    }
    return 0;
}