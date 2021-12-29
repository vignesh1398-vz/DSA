#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

int main(int argc, char** argv) {
    int arr[] = {3, 4, 5, 6, 7, 2};
    bubble_sort(arr, 6);

    for(auto element: arr) {
        cout << element << ' ';
    }

    return 0;
}