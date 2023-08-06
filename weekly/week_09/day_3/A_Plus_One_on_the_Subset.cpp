#include <bits/stdc++.h>

using namespace std;

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;
        vector<long long> vec(n);

        for (long long& x : vec) cin >> x;
        sort(vec.begin(), vec.end());
    
        cout << vec[n - 1] - vec[0];
        cout << endl;
    }

    return 0;
}