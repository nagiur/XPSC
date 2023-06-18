#include <bits/stdc++.h>

using namespace std;

#define watch(x) cerr << "W: " << (#x) << " : " << (x) << endl

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        vector<long long> nums;
        long long sum = 0;

        for (size_t i = 0; i < n; i++) {
            if (str[i] == 'R') {
                nums.push_back(i - (n - 1 - i));
                sum += n - 1 - i;
            } else if (str[i] == 'L') {
                nums.push_back((n - 1 - i) - i);
                sum += i;
            }
        }

        sort(nums.begin(), nums.end(), greater<int>());

        for (auto num : nums) {
            if (num > 0) {
                sum += num;
            }
            cout << sum << " ";
        }

        cout << endl;
    }

    return 0;
}