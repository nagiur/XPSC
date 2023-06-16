#include <bits/stdc++.h>

using namespace std;

bool canMakeAllEvenOrOdd(vector<int> &a) {
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    if (evenCount == 0 || oddCount == 0) {
        return true;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] % 2 == 0) {
            a[i]--;
            evenCount--;
        } else {
            a[i]++;
            oddCount--;
        }

        if (evenCount == 0 || oddCount == 0) {
            return true;
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (canMakeAllEvenOrOdd(a)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
