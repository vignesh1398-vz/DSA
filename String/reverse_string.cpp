#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string reverse_string(string str)
{
    string reversed_string = "";
    for (int i = str.size() - 1; i >= 0; i--)
    {
        reversed_string += str[i];
    }
    return reversed_string;
}

int main(int argc, char **argv)
{
    string str = "Hello";
    string reversed_string = reverse_string(str);
    cout << "Reversed string: " << reversed_string;
    return 0;
}