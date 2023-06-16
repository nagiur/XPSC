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

    int n, m, x;
    cin >> n >> m;

    vector<vector<int>> nums(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> nums[i][j];
        }
    }
    cin >> x;

    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (nums[i][j] == x) {
                found = true;
                break;
            }
        }
    }

    if (found) {
        cout << "will not take number\n";
    } else {
        cout << "will take number\n";
    }

    return 0;
}