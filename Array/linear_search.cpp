#include<bits/stdc++.h>
using namespace std;

int linear_search(int * arr, int n ,int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main(int argc, char** argv) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << linear_search(arr, 7, 7) << "\n";
    cout << linear_search(arr, 7, 1) << "\n";
    cout << linear_search(arr, 7, -9) << "\n";
    cout << linear_search(arr, 7, 5) << "\n";
    return 0;
} 