#include <bits/stdc++.h>

using namespace std;

#define watch(x) cerr << "Watch: " << (#x) << " is " << (x) << endl

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        vector<int> a(3);
        vector<int> b(3);

        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < 3; i++) {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int sum_a = a[1] + a[2];
        int sum_b = b[1] + b[2];

        if (sum_a > sum_b) {
            cout << "Alice\n";
        } else if (sum_a < sum_b) {
            cout << "Bob\n";
        } else {
            cout << "Tie\n";
        }
    }

    return 0;
}