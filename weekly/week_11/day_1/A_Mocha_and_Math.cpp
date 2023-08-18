#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> vec(n);
        for (auto &v : vec) cin >> v;

        int result = vec[0];
        for (size_t i = 1; i < n; i++) {
            result = result & vec[i];
        }

        cout << result << endl;
    }

    return 0;
}