#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        vector<long long> b;
        vector<long long> c;

        for (auto &v : a) cin >> v;
        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++) {
            bool bl = false;

            for (int j = 0; j < n; j++) {
                if (i != j && (a[i] % a[j] == 0)) {
                    bl = true;
                    break;
                }
            }

            if (bl) {
                b.push_back(a[i]);
            } else {
                c.push_back(a[i]);
            }
        }

        if (b.size() == 0 || c.size() == 0) {
            cout << "-1\n";
        } else {
            cout << b.size() << " " << c.size() << endl;
            
            for (auto v : b) cout << v << " ";
            cout << endl;
            for (auto v : c) cout << v << " ";
            cout << endl;
        }
    }

    return 0;
}
