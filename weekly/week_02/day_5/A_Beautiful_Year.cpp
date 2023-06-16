#include <bits/stdc++.h>
using namespace std;

int nextDistinctYear(int y) {
    int year = y + 1;
    while (true) {
        bool distinct = true;
        vector<int> digits;
        while (year > 0) {
            digits.push_back(year % 10);
            year /= 10;
        }
        for (int i = 0; i < digits.size(); i++) {
            for (int j = i + 1; j < digits.size(); j++) {
                if (digits[i] == digits[j]) {
                    distinct = false;
                    break;
                }
            }
            if (!distinct) {
                break;
            }
        }
        if (distinct) {
            return year;
        }
        year++;
    }
}

int main() {
    int y;
    cin >> y;
    int nextYear = nextDistinctYear(y);
    cout << nextYear << endl;
    return 0;
}
