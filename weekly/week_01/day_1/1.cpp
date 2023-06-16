#include <bits/stdc++.h>

using namespace std;

// Problem: Max Sum Subarray of size K

long maximumSumSubarray(int K, vector<int> &Arr, int N) {
    long maxx = INT_MIN, sum = 0;
    int i = 0, j = 0;

    while (j < N) {
        sum += Arr[j];
        if (j < K - 1) {
            j++;
        } else {
            maxx = max(maxx, sum);
            sum -= Arr[i];
            i++;
            j++;
        }
    }

    return maxx;
}

int main() {
    int n = 5, k = 2;
    vector<int> A = {-8, 2, 3, -6, 10};

    cout<<maximumSumSubarray(k, arr, n);

    return 0;
}