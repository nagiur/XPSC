#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, h;

    cin >> x >> y >> h;

    int sum = x;
    sum += (y * (--h));

    cout << sum << endl;

    return 0;
}