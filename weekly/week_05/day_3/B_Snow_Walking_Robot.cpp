#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        string str;
        cin >> str;
        map<char, int> cnt;

        for (char ch : "LRUD") {
            cnt[ch] = 0;
        }

        for (char ch : str) {
            cnt[ch] = cnt[ch] + 1;
        }

        int v = min(cnt['U'], cnt['D']);
        int h = min(cnt['L'], cnt['R']);

        if (min(v, h) == 0) {
            if (v == 0) {
                h = min(h, 1);

                cout << 2 * h << endl;
                cout << string(h, 'L') + string(h, 'R') << endl;

            } else {
                v = min(v, 1);
                cout << 2 * v << endl;
                cout << string(v, 'U') + string(v, 'D') << endl;
            }
        } else {
            string res;
            res += string(h, 'L');
            res += string(v, 'U');
            res += string(h, 'R');
            res += string(v, 'D');

            cout << res.size() << endl;
            cout << res << endl;
        }
    }

    return 0;
}
