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

const int N = 1e3 + 5;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, t;
    cin >> a >> b >> t;

    int total = 0;
    for (int i = a; i <= t; i += a) {
        total += b;
    }

    cout << total << endl;

    return 0;
}