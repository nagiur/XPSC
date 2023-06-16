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
    int min_feq = 1, n;

    cin >> n;

    vi nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int miN = nums[0];
    for (int i = 1; i < n; i++) {
        if (miN == nums[i]) {
            min_feq++;
        }
        // cout<<nums[i]<<" ";
    }
    if (min_feq % 2 == 1) {
        cout << "Lucky\n";
    } else {
        cout << "Unlucky\n";
    }
    

    return 0;
}