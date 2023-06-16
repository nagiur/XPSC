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
    int t, n;

    cin >> t;
    while (t--) {
        cin >> n;

        vi nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        int minn = INT_MAX, sum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                sum = nums[i] + nums[j] + j - i;
                // cout << sum << endl;
                if (sum < minn) {
                    minn = sum;
                }
            }
        }
        cout << minn << endl;
    }

    return 0;
}