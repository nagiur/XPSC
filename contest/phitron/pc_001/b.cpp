#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define clear                \
    ios::sync_with_stdio(0); \
    cin.tie(0);

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

int main() {
    clear;

    int kase;
    cin >> kase;

    int n, d;
    while (kase--) {
        string str;
        cin >> str;

        int left  = str[0] + str[1] + str[2];
        int right = str[3] + str[4] + str[5];

        string ans = (left == right) ? "YES" : "NO";

        cout << ans;

        cout << endl;
    }

    return 0;
}