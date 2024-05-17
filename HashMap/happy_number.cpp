#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <math.h>

using namespace std;

bool isHappy(int n)
{
    map<int, bool> mp;
    int temp = n;
    int sumOfSquare = 0;
    while (sumOfSquare != 1)
    {
        sumOfSquare = 0;
        while (temp)
        {
            int digit = temp % 10;
            sumOfSquare += pow(digit, 2);
            temp = temp / 10;
        }
        // cout << sumOfSquare << endl;
        if (mp.find(sumOfSquare) != mp.end())
            return false;
        else
        {
            mp.insert({sumOfSquare, true});
            temp = sumOfSquare;
        }
    }
    return true;
}

int main(int argc, char **argv)
{
    cout << "Hello World";
    int n1 = 19;
    int n2 = 2;
    bool result = isHappy(n1);
    cout << "Result: " << result;
    return 0;
}