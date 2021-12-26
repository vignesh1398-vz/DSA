#include<bits/stdc++.h>
using namespace std;

int binary_search(int * arr, int n ,int key) {
    int start = 0, end = n - 1;
    while(start <= end) {
        int mid = (start + end) / 2;
        if(arr[mid] == key) 
            return mid;
        else if(arr[mid] > key) 
            end = mid - 1;
        else 
            start = mid + 1;
    }
    return -1;
}

int main(int argc, char** argv) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << binary_search(arr, 7, 7) << "\n";
    cout << binary_search(arr, 7, 1) << "\n";
    cout << binary_search(arr, 7, -9) << "\n";
    cout << binary_search(arr, 7, 5) << "\n";
    cout << binary_search(arr, 4, 5) << "\n";
   return 0;
}