#include<bits/stdc++.h>
using namespace std;

void selection_sort(int *arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        int current = INT_MAX, min_position = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_position]) {
                min_position = j;
            }
        }
        swap(arr[i], arr[min_position]);
    }
}

int main(int argc, char** argv) {
    int arr[] = {3, 5, 4, 7, 2, 6};
    selection_sort(arr, 6);

    for(auto element: arr) {
        cout << element << ' ';
    }

    return 0;
}