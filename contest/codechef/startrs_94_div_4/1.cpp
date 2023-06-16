#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, n, m;

    cin >> x >> n >> m;

    if (n - x <= m) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}