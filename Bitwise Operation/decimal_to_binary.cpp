#include<bits/stdc++.h>
using namespace std;

int decimal_to_binary(int number) {
    int result = 0, last_bit, offset = 1;
    while(number) {
        last_bit = number & 1;
        number = number >> 1;
        result += (last_bit*offset);
        offset *= 10;
    }
    return result;
}

int main(int argc, char** argv) {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;

    cout << decimal_to_binary(number);

    return 0;
}