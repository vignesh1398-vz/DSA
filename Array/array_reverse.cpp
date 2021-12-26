#include<bits/stdc++.h>
using namespace std;

void reverseArray(int *arr, int n) {
    int start = 0, end = n - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(int argc, char** argv) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    reverseArray(arr, 7);
    cout << "After reversing we get" << "\n";

    for(auto element: arr) {
        cout << element << ' ';
    }
    return 0;
}