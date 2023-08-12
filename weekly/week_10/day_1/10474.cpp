#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;f
    int x, kase = 1;

    while (cin >> n >> q) {
        if (n == 0 && q == 0) {
            break;
        }

        vector<int> vec(n);
        // for (auto &v : vec) cin >> v;
        for (int i = 0; i < n; i++)
        {
            cin>>vec[i];
        }
        

        sort(vec.begin(), vec.end());

        cout << "CASE# " << kase << ":\n";

        for (size_t i = 0; i < q; i++) {
            cin >> x;
            int found = 0;
            for (size_t v = 0; v < n; v++) {
                if (vec[v] == x) {
                    found = v;
                    break;
                }
            }
            

            if (found) {
                cout << x << " found at " << 1 + found << endl;
            } else {
                cout << x << " not found" << endl;
            }
        }
        kase++;
    }

    return 0;
}