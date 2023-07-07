#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, cnt = 0;
        cin >> n;
        string str;
        cin >> str;

        for (int i = 0; i < n; i++) {
            if (str[i] == ':') {
                int c = 0;
                int j = i + 1;

                while (j < n && str[j] == ')') {
                    c++;
                    j++;
                }

                if (c > 0 && j < n && str[j] == ':') {
                    cnt++;
                }
                i = j - 1;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}