#include <bits/stdc++.h>

using namespace std;

#define watch(x) cerr << "Watch: " << (#x) << " is " << (x) << endl

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;
        vector<int> candies(n);

        for (auto &can : candies) {
            cin >> can;
        }

        int left  = 0;
        int right = n - 1;

        int alice = candies[0];
        int bob   = candies[n - 1];
        int total = 0;

        while (left < right) {
            if (alice == bob) {
                total = max(total, left + 1 + n - right);
            }
            
            if (alice <= bob) {
                left++;
                alice += candies[left];
            } else if (alice > bob) {
                right--;
                bob += candies[right];
            }
        }

        cout << total << endl;
    }

    return 0;
}