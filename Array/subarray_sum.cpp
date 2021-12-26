#include <bits/stdc++.h>
using namespace std;

int brute_force(int *arr, int n) {
    int largestSum = 0, subArraySum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            subArraySum = 0;
            for(int k = i; k < j; k++) {
                subArraySum = subArraySum + arr[k];
            }
            largestSum = max(largestSum, subArraySum);
        }
    }
    return largestSum;
}

int main(int argc, char **argv) {
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    cout << brute_force(arr, 9) << '\n';
    return 0;
}