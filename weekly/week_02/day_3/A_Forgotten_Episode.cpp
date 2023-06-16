#include <bits/stdc++.h>

using namespace std;

// Problem(Day-3): A. Forgotten Episode

int main() {
    int n, k = 0;

    cin >> n;
    vector<int> episodes(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> k;
        episodes[k]++;
    }

    for (int i = 1; i <= n; i++) {
        if (episodes[i] == 0) {
            cout << i << endl;
            break;
        }
    }

    // for(auto ep: episodes){
    //     cout<<ep<<endl;
    // }

    return 0;
}