#include <bits/stdc++.h>
using namespace std;

/* O(N^3) time complexity (Brute force approach) */
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

/* Kadane's Algorithm O(n) approach */
int kadane_algorithm(int *arr, int n) {
    int current_sum = 0, max_sum = 0;
    for(int i = 0; i < n; i++) {
        current_sum += arr[i];
        if(current_sum < 0) 
            current_sum = 0;
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main(int argc, char **argv) {
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    cout << brute_force(arr, 9) << '\n';
    cout << kadane_algorithm(arr, 9) << '\n';
    return 0;
}