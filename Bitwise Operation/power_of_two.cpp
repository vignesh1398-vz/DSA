#include<bits/stdc++.h>
using namespace std;

int main(int argc, char **argv) {
    int number;
    cout << "Enter number: ";
    cin >> number;
    if(number & (number - 1)) {
        cout << "Not a power of two";
    }
    else
        cout << "Power of two";
    return 0;
}