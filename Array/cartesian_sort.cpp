#include<bits/stdc++.h>
using namespace std;

bool comparator(pair<int, int> a, pair<int, int> b) {
    bool flag;
    if(a.first == b.first) {
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main(int argc, char** argv) {
    vector <pair<int, int>> v { {3, 4}, {2, 3}, {3, 7}, {1, 5}, {3, 4}};
    sort(v.begin(), v.end(), comparator);

    for(auto x: v) {
        cout << x.first << "," << x.second << '\n';
    }
    return 0;
}