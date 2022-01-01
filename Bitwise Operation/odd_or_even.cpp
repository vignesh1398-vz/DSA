#include<bits/stdc++.h>
using namespace std;

int main(int argc, char **argv) {
    int number;
    cout << "Enter number: ";
    cin >> number;
    if(number & 1) {
        cout << "Odd";
    }
    else
        cout << "Even";
    return 0;
}