#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, c, in;
        cin >> n >> c;

        priority_queue<int> q;
        for (int i = 1; i <= n; i++) {
            cin >> in;
            q.push(-in - i);
        }

        int res = 0;
        while (!q.empty()) {
            int t = -q.top();
            q.pop();
            if (t > c) {
                break;
            }
            ++res;
            c -= t;
        }
        cout<<res<<endl;
    }

    return 0;
}