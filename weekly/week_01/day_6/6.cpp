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
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, in;
    cin >> n >> m;

    vector<int> feq(m + 1);

    for (int i = 0; i < n; i++) {
        cin >> in;
        feq[in]++;
    }

    for (int i = 1; i <= m; i++) {
        cout << feq[i] << endl;
    }

    return 0;
}