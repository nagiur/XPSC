#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string ll_to_str(ll val) {
    string ans = "";
    while (val) {
        ll digit = val % 10;
        ans += (digit + '0');
        val = val / 10;
    }
    reverse(ans.begin(), ans.end());

    return ans;
}

vector<ll> v;

void solve() {
    ll n;
    cin >> n;

    ll a[n];
    ll feq[35000] = {0};
    
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        feq[a[i]]++;
    }


}

bool isPalindrome(ll val) {
    string ans     = to_string(val);
    string ans_rev = ans;

    reverse(ans_rev.begin(), ans_rev.end());

    return ans == ans_rev;
}

int main() {
    for (ll i = 0; i < (1 << 15); i++) {
        if (isPalindrome(i)) {
            v.push_back(i);
        }
    }

    for (ll val : v) {
        cout << val << " ";
    }

    solve();

    return 0;
}