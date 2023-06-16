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
#define ln printf("\n")
#define pln(val) cout << val << endl;

// Problems: Given an array of integers, find maximum sum subarray of the required size.

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vi nums(0);
    int x, k;
    while (cin >> x) {
        nums.push_back(x);
    }

    k        = 2;
    int maxx = -5;
    int sum  = 0;
    // O(n+k)
    for (int i = 0; i < nums.size() - 0; i = i + 1) {
        for (int j = i; j < i + k; j++) {
            cout << nums[j] << " ";
            sum += nums[j];
        }
        maxx = max(maxx, sum);
        sum  = 0;
        ln;
    }
    ln;
    pln(maxx);

    return 0;
}