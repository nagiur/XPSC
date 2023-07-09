#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<string> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        for (int i = 0; i < n - 3; i++) {
            if (s[i][1] != s[i + 1][0]) {
                s.insert(s.begin() + i + 1, s[i].substr(1) + s[i + 1][0]);
                break;
            } else if (i == n - 4) {
                s.push_back(s[i + 1].substr(1) + 'a');
            }
        }

        cout << s[0][0];
        for (int i = 0; i < n - 1; i++) {
            cout << s[i][1];
        }
        cout << endl;
    }

    return 0;
}