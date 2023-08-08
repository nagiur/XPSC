#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<int> vec(n);
        vector<int> levels(n);

        for (auto &v : vec) cin >> v;
        sort(vec.begin(), vec.end());

        long long times = vec[0] - 1;
        levels[0] = vec[0];

        int level = 2;
        for (size_t i = 1; i < n; i++) {
            if (vec[i] < level) {
                levels[i] = vec[i];
            } else {
                levels[i] = level;
                level++;
            }
        }

        for (size_t i = 0; i < n; i++) {
            times += (vec[i] - levels[i]);
        }

        cout << times << endl;
    }

    return 0;
}