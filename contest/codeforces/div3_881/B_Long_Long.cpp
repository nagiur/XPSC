#include <bits/stdc++.h>

using namespace std;

// long long do_sum(vector<int> &arr){}
#define watch(x) cerr << "Watch: " << (#x) << " is " << (x) << endl

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        int n;
        cin >> n;

        vector<long long> arr(n);

        string sl         = "-";
        long long sum     = 0;
        int neg           = 0;
        int ops           = INT_MIN;
        long long abs_sum = 0;

        long long num;
        for (int i = 0; i < n; i++) {
            cin >> num;
            abs_sum += abs(num);

            if (num < 0) {
                neg++;
            }

            sum += abs(num);
        }
        ops = max(ops, neg);
        watch(ops);
        watch(neg);
        watch(sl);
        cout << sum;
        cout << " ";
        cout << ops << endl;
        watch(kase);
    }

    return 0;
}