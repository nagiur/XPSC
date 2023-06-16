#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ln cout << endl;
#define pln(val) cout << val << endl;

bool is_palindrome(ll n) {
    ll reversed = 0;
    ll rem      = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    cout << reversed << endl;

    return reversed == rem;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    if (is_palindrome(n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}