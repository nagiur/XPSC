#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        set<int> res;
        for (int i = 9; i >= 1; i--) {
            if (n >= i) {
                res.insert(i);
                n -= i;
            }
        }
 

        for (auto r : res) {
            cout << r;
        }
        
        cout << endl;
    }

    return 0;
}