#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        vector<int> com(4);

        for (auto &c : com) {
            cin >> c;
        }
        sort(com.begin(), com.end());

        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += com[i];
        }

        if (com[3] > sum) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}