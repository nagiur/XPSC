#include <bits/stdc++.h>

using namespace std;

#define watch(x) cerr << (x) << endl

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long first  = c % 2 == 1 ? (c / 2) + 1 + a : (c / 2) + 0 + a;
        long long second = (c / 2) + b;

        if (first > second) {
            cout << "First\n";
        } else {
            cout << "Second\n";
        }
    }

    return 0;
}