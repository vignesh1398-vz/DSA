#include<bits/stdc++.h>
using namespace std;

int main() {
    int number = 0, digit = 0;
    vector<int> digits = {9};
    vector<int> result;

    for(int i = 0; i < digits.size(); i++) {
        number = number + (digits[i]*pow(10, digits.size()-i-1));
    }
    number = number + 1;

    while(true) {
        result.insert(result.begin(), number%10);
        number /= 10;
        if(number == 0) break;
    }

    for(auto num: result) {
        cout << num;
    }
    return 0;
}