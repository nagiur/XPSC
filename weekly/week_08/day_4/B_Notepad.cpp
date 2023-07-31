#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        string str;
        cin >> str;

        bool flag = false;

        unordered_map<string, int> cur;
        for (int i = 0; i < n - 1; i++) {
            string s = str.substr(i, 2);
            if (cur.find(s) != cur.end()) {
                if (cur[s] < i - 1) {
                    flag = true;
                    break;
                }
            } else {
                cur[s] = i;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}