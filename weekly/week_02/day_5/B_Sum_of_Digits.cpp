#include <bits/stdc++.h>

using namespace std;

int sum_str(string str) {
    int sum = 0;
    for (int i = 0; i < str.length(); i++) {
        sum += str[i] - '0';
    }
    return sum;
}

int sum_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    string n;

    cin >> n;

    if (n.length() == 1) {
        cout << 0 << endl;
        return 0;
    }

    int num   = sum_str(n);
    int coutn = 1;

    while (num > 9) {
        num = sum_digits(num);
        coutn++;
    }

    cout << coutn << endl;

    return 0;
}