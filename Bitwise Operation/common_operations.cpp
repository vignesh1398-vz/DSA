#include<bits/stdc++.h>
using namespace std;

int getIthBit(int number, int bit_position) {
    int mask = (1 << bit_position);
    return (number & mask) > 0 ? 1 : 0;
}

int clearIthBit(int &number, int bit_position) {
    int mask = ~(1 << bit_position);
    return number & mask;
}

int setIthBit(int &number, int bit_position) {
    int mask = (1 << bit_position);
    return (number | mask);
}

int main(int argc, char **argv) {
    int number, bit_position;
    cout << "Enter number: ";
    cin >> number;
    cout << "\nEnter bit position: ";
    cin >> bit_position;

    cout << "\n" << getIthBit(number, bit_position);
    cout << "\n" << clearIthBit(number, bit_position);
    cout << "\n" << setIthBit(number, bit_position); 

    return 0;
}