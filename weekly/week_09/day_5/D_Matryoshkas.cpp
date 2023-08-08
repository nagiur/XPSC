#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> vec(n);
        set<int> st;
        map<int, int> total;

        for (auto &v : vec) {
            cin >> v;
            total[v]++;
            st.insert(v);
            st.insert(v + 1);
        }

        int result = 0;
        int last   = 0;

        for (auto s : st) {
            result += max(0, (total[s] - last));
            last = total[s];
        }

        cout << result << endl;
    }

    return 0;
}