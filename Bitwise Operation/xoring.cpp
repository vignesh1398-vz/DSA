#include<bits/stdc++.h>
using namespace std;

int xoring(vector<int> v) {
    int unique_number = 0;
    for(auto element: v) {
        unique_number = unique_number ^ element;
    }
    return unique_number;
}

int main(int argc, char** argv) {
    vector<int> v1 {9, 9, 5, 4, 5};
    vector<int> v2 {1, 2, 3, 1, 4, 2, 3};

    cout << xoring(v1);
    cout << xoring(v2);

    return 0;
}