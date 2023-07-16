#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        if (n % 2 == 0 && n % 7 == 0) {
            cout << "Alice\n";
        } else if (n % 2 == 1 && n % 9 == 0) {
            cout << "Bob\n";
        } else {
            cout << "Charlie\n";
        }
    }

    return 0;
}