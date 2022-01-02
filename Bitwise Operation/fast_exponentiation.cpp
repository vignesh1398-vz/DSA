#include<bits/stdc++.h>
using namespace std;

int fast_expo(int number, int power) {
    int result = 1, last_bit;
    while(power) {
        last_bit = (power&1);
        if(last_bit) {
            result = result * power;
        }
        number = number * number;
        power = power >> 1;
    }
    return result;
}

int main(int argc, char** argv) {
    int number, power;
    cin >> number >> power;

    cout << fast_expo(number, power);

    return 0;
}

