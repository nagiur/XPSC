#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int maxx = 0, ans = -1;
    for (int i = 2; i <= 1000; i++) {
        int coutn = 0;

        for (int j = 0; j < n; j++) {
            if (vec[j] % i == 0) {
                coutn++;
            }
        }

        if (maxx < coutn) {
            maxx = coutn;
            ans  = i;
        }
    }

    cout << ans << endl;

    return 0;
}