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

    int n, in;
    cin >> n;

    deque<ll> nums;
    for (int i = 0; i < n; i++) {
        cin >> in;
        nums.push_back(in);
    }


    cout << endl;

    while (nums.size() > 0) {
        cout << nums.front() << " ";
        nums.pop_front();

        if(nums.empty()){
            break;
        }

        cout << nums.back() << " ";
        nums.pop_back();
    }

    ln;
    return 0;
}