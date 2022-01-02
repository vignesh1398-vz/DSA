#include<bits/stdc++.h>
using namespace std;

/* Counts the number of bits that are set. */
int set_bits_count(int n) {
    int count = 0;
    while(n > 0) {
        count += n & 1;
        n = n >> 1;
    }
    return count;
}

int main(int argc, char **argv) {
    int number;
    cout << "Enter number: ";
    cin >> number;

    cout << '\n' << set_bits_count(number);

    return 0;
}