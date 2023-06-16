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

    vector<long long> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        // cout<<nums[i]<<" ";
    }

    // sort(nums.begin(), nums.end());
    // reverse(nums.begin(), nums.end());

    sort(nums.begin(), nums.end(), greater<int>());

    ll sum = 0;
    for (int i = 0; i < n; i++) {
        // cout<< nums[i]<<endl;
        if(nums[i] > 0)
            sum += nums[i];
        // cout<<sum<<endl;
    }

    cout<<sum<<endl;
    return 0;
}