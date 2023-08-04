#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, y;

    vector<pair<int, bool>> vec;
    cin >> n;

    while (n--) {
        cin >> x >> y;
        vec.push_back(make_pair(x, true));
        vec.push_back(make_pair(y, false));
    }

    sort(vec.begin(), vec.end());
    int now = 0, mx = 0;

    for (size_t i = 0; i < vec.size(); i++) {
        now += vec[i].second ? 1 : -1;
        mx = max(mx, now);
        cout << vec[i].first << " - " << vec[i].second << " - " << now << " - " << mx << endl;
    }
    cout << mx << endl;

    return 0;
}