#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        string s;
        cin >> s;

        bool bl      = true;
        int half_len = s.length() / 2;

        if (s.length() % 2 == 0) {
            for (int i = 0; i < half_len; i++) {
                if (s[i] != s[i + half_len]) {
                    bl = false;
                }
            }
        } else {
            bl = false;
        }

        cout << (bl ? "YES" : "NO") << endl;
    }

    return 0;
}