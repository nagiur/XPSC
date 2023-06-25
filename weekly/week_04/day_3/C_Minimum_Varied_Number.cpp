#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        string str;
        int s;
        cin >> s;

        for (int i = 9; i >= 1; i--) {
            if (s >= i) {
                str = char('0' + i) + str;
                s -= i;
            }
        }
        cout << str << endl;
    }

    return 0;
}