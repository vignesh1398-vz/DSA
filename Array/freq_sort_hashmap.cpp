#include<bits/stdc++.h>
using namespace std;

bool sorter(pair<int, int> a, pair<int, int> b) {
    if(b.second != a.second) {
        return (b.second < a.second);
    }
    else {
        return (a.first < b.second);
    }
}

int main() {
    vector<int> arr = {2, 5, 2, 8, 5, 6, 8, 8};
    vector<pair<int, int>> secondary_arr;
    map<int, int> mp;

    for(int i = 0; i < arr.size(); i++) {
        /* If element not present in hashmap*/
        if(mp.find(arr[i]) == mp.end()) {
            mp.insert({arr[i], 1});
        }
        else {
            mp[arr[i]]++;
        }
    }

    /* Populate the map entries into a secondary <int, int> vector */
    for(auto it: mp) {
        secondary_arr.push_back(make_pair(it.first, it.second));
    }
    sort(secondary_arr.begin(), secondary_arr.end(), sorter);
    for(auto it: secondary_arr) {
        cout << it.first << "->" << it.second << endl;
    }
    return 0;
}