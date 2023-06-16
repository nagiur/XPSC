#include <bits/stdc++.h>
using namespace std;

#define watch(x) cerr << (#x) << " is " << (x) << endl;

int main() {
    int n;
    n = 2 * 2;

    watch(n);  // output : n is 4

    int exponent = 2;
    watch(pow(n, exponent));  // output: pow(n,exponent) is 16
    for (int i = 0; i < 4; i++) {
        watch(i);
    }

    watch(exponent);
}