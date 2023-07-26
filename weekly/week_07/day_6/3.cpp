#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        long long n;
        cin >> n;

        vector<long long> vec(n);
        long long sum = 0, in;

        for (size_t i = 0; i < n; i++) {
            cin >> in;
            sum += in;
        }

        if (sum % 2 == 0) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}