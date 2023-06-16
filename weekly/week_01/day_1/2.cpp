#include <bits/stdc++.h>

using namespace std;

// Problem: First negative integer in every window of size k

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    vector<long long> result;
    int i = 0, j = 0;
    queue<int> q;

    while (j < N) {
        if (A[j] < 0) {
            q.push(A[j]);
        }

        if (j < K - 1) {
            j++;
        } else {
            if (q.empty()) {
                result.push_back(0);
                // cout << 0 << " ";
            } else {
                // cout << q.front() << " ";
                result.push_back(q.front());
            }

            if (A[i] < 0) {
                q.pop();
            }
            i++;
            j++;
        }
    }

    return result;
}

int main() {
    int n = 5, k = 2;
    long long arr[5] = {-8, 2, 3, -6, 10};

    vector<long long> ans = printFirstNegativeInteger(arr, n, k);

    for (auto t : ans) {
        cout << t << " ";
    }
    cout << endl;

    return 0;
}