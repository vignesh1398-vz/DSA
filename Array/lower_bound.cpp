#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int>v, int val) {
    int lb = INT_MAX;
    for(auto x: v) {
        if(x <= val)
            lb = x;
    }
    return lb;
}

int main(int argc, char** argv) {
    vector <int> v1 { -1, -1, 2, 3, 5 };
    vector <int> v2 { 1, 2, 3, 4, 5 };
    cout << lower_bound(v1, 4) << '\n';
    cout << lower_bound(v2, 4) << '\n';

    return 0;
}