#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++) {
        vec[i] = vec[i - 1] + vec[i];
    }

    int q, i, j;
    cin >> q;
    while (q--) {
        cin >> i >> j;
        cout << vec[j] - vec[i - 1];
        cout << endl;
    }

    return 0;
}