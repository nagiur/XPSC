#include <bits/stdc++.h>

using namespace std;
#define watch(x) cerr << (#x) << " : " << (x) << endl

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;
        vector<int> vec(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end());
        int result = 0;
        int len    = n / 2;
        for (size_t i = 0; i < len; i++) {
            result += vec[n - i - 1] - vec[i];
            watch(vec[n - i - 1]);
            watch(vec[i]);
        }

        cout << result << endl;
    }

    return 0;
}