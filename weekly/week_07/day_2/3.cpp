#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, mit = 0;
        cin >> n;

        while (true) {
            if (n > 50) {
                n -= 3;
            } else if (n < 50) {
                n += 2;
            } else {
                break;
            }
            mit++;
        }

        cout << mit << endl;
    }

    return 0;
}