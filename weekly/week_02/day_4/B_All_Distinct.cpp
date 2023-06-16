#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n, in;
        set<int> nums;

        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> in;
            nums.insert(in);
        }

        if ((n - nums.size()) % 2 == 0) {
            cout << nums.size() << endl;
        } else {
            cout << nums.size() - 1 << endl;
        }
    }

    return 0;
}
