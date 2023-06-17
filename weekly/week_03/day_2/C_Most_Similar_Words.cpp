#include <bits/stdc++.h>

using namespace std;

#define watch(x) cerr << "Watch: " << (#x) << " is " << (x) << endl

int diff(string &s1, string &s2) {
    int dist = 0;
    for (size_t i = 0; i < s1.size(); i++) {
        dist += abs(s1[i] - s2[i]);
    }
    return dist;
}

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, m;
        cin >> n >> m;

        vector<string> str(n);

        for (size_t i = 0; i < n; i++) {
            cin >> str[i];
        }

        int min_diff = INT_MAX;
        for (size_t i = 0; i < n; i++) {
            for (size_t j = i + 1; j < n; j++) {
                min_diff = min(min_diff, diff(str[i], str[j]));
                watch(2*min_diff);
            }
        }

        cout << min_diff << endl;
    }

    return 0;
}