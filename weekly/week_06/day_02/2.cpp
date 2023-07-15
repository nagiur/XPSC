#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        if (n <= 15) {
            if (n <= 10) {
                cout << "Lower Double\n";
            } else {
                cout << "Lower Single\n";
            }
        } else {
            if (n <= 25) {
                cout << "Upper Double\n";
            } else {
                cout << "Upper Single\n";
            }
        }
    }

    return 0;
}