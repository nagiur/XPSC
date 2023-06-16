#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, s;
    cin >> k >> s;

    int coutn = 0;

    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int z = s - x - y;
            if (0 <= z and z <= k) {
                coutn++;
            }
        }
    }

    cout << coutn;
    cout << endl;

    return 0;
}