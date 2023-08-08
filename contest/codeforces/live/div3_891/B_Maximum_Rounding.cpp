#include <bits/stdc++.h>

using namespace std;
#define watch(x) cerr << "Watch: " << (#x) << " == " << (x) << endl

std::string roundStringToKthDigit(const std::string& x, int k) {
    if (k < 0 || k >= x.length()) {
        return x;  // Invalid k, return the original string
    }

    std::string result = x;
    for (int i = k + 1; i < result.length(); ++i) {
        result[i] = '0';  // Round digits beyond the k-th digit to 0
    }
    return result;
}

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        string str;
        cin >> str;

        int sz = str.size();
        string res;  // = roundStringToKthDigit(str, 1);

        for (int i = 1; i <= sz; i++) {
            str = roundStringToKthDigit(str, i);
            watch(str);
            // watch(res);
        }

        cout << str << endl;
        // cout << endl;
        // watch(str);
    }

    return 0;
}
/*
n913
k210
1000

419860
420000
*/
