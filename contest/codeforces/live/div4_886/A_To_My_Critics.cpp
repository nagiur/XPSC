#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        vector<int> num(3);
        cin >> num[0] >> num[1] >> num[2];

        sort(num.begin(), num.end());

        if (num[2] + num[1] >= 10) {
            cout << "YES\n";
        } else if (num[0] + num[1] >= 10) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}