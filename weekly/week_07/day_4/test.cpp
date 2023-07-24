#include <bits/stdc++.h>

using namespace std;

int permutation(int n, int r) {
    if (n < r) {
        std::cout << "Error: n must be greater than or equal to r.\n";
        return -1;
    }

    int numerator   = 1;
    int denominator = 1;

    // Calculate the factorial of n and (n-r)
    for (int i = 1; i <= n; ++i) {
        cout << numerator << " ";
        numerator *= i;
        if (i <= n - r) {
            denominator *= i;
        }
    }
    cout << endl;
    return numerator / denominator;
}

int main() {
    int n, r;

    std::cin >> n;

    std::cin >> r;

    int result = permutation(n, r);

    if (result != -1) {
        cout << n << " " << r << " at a time is: " << result << endl;
    }

    return 0;
}
