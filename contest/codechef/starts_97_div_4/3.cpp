#include <bits/stdc++.h>

using namespace std;

#define watch(x) cerr << "Watch: " << (#x) << " is " << (x) << endl

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        string s, t, u;
        cin >> s;
        cin >> t;
        cin >> u;

        int dist = 0;

        if ((t[0] - s[0]) < 0) {
            // dist = abs(t[0] - s[0]) + 'z' - s[0];
            dist = ('z' - s[0]) + (t[0] - 'a') + 1;

        } else {
            dist = t[0] - s[0];
        }

        cout << dist << " : ";

        for (char ch : u) {
            if (ch + dist <= 'z') {
                printf("%c", ch + dist);
            } else {
                ch = dist - ('z' - ch);
                printf("%c", 'a' + ch - 1);
            }
        }
        cout << endl;
    }

    return 0;
}