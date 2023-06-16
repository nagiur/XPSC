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

int main() {
    int t, n, x;

    cin >> t;
    while (t--) {
        cin >> n >> x;

        ll cost = n * x;

        int countn = 0;
        while (cost > 0) {
            cost /= 10;
            countn++;
        }

        if (countn == 5) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}