#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int n, k;
    ll sum = 0;
    vector<ll> vec;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        vec.push_back(k);
        sum += k;
    }

    sort(vec.begin(), vec.end());

    int i = 0;
    while (true) {
        if (sum % 2 == 0) {
            break;
        }

        if (vec[i] % 2 != 0) {
            sum = sum - vec[i];
        }
        i++;
    }
    
    cout << sum << endl;

    return 0;
}