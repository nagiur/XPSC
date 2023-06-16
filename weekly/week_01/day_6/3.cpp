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
    int n, k;

    cin >> n >> k;
    vector<ll> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i += k) {
        ll minN = nums[i];
        for (int j = i + 1; j < i + k && j < n; j++) {
            minN = min(minN, nums[j]);
        }
        cout << minN << " ";
    }

    cout << endl;

    return 0;
}