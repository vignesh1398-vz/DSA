#include<bits/stdc++.h>
using namespace std;

void brute_force(vector<int>v, int target) {
    int x, y, current_sum, diff = INT_MAX;
    for(int i = 0; i < v.size() - 1; i++) {
        for(int j = i + 1; j < v.size(); j++) {
            current_sum = v[i] + v[j];
            if(abs(target - current_sum) < diff) {
                diff = abs(target - current_sum);
                x = v[i];
                y = v[j];
            }
        }
    }
    cout << x << y;
}

pair<int,int> two_pointers(vector<int>v, int target) {
    int x, y, current_sum, diff = INT_MAX, l = 0, r = v.size() - 1;
    while(l < r) {
        current_sum = v[l] + v[r];
        if(abs(target - current_sum) < diff) {
            diff = abs(target - current_sum);
            x = v[l];
            y = v[r];
        }

        if(target > current_sum)
            l++;
        else 
            r--;
    }
    return {x, y};
}


int main(int argc, char** argv) {
    vector<int>v{ 10, 22, 28, 29, 30, 40 };
    pair<int,int> p;
    int x = 54;
    brute_force(v, x);
    p = two_pointers(v, x);
    cout << p.first << p.second;
    return 0;
}