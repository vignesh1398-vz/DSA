#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int *arr, int n) {
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        for(int j = i - 1; j >= 0; j--) {
            if(temp < arr[j]) {
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }   
    }
}

int main(int argc, char** argv) {
    int arr[] = {3, 5, 4, 7, 6, 2};
    insertion_sort(arr, 6);

    for(auto element: arr) {
        cout << element << ' ';
    }

    return 0;
}