#include <bits/stdc++.h>

using namespace std;

int to_k_base(long long n, int k) {
    string new_n = "";

    while (n > 0) {
        int rem = n % k;
        new_n += to_string(rem);
        n /= k;
    }

    reverse(new_n.begin(), new_n.end());

    return new_n.length();
}

int main() {
    long long n;
    int k;

    cin >> n >> k;

    cout << to_k_base(n, k) << endl;


    return 0;
}