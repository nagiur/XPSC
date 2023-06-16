#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define ln printf("\n")
#define pln(val) cout << val << endl;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vi nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    // for (auto num : nums) {
    //     cout << num << " ";
    // }
    // cout<<endl;

    int coutn = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + 1 == nums[j]) {
                coutn++;
                // cout << coutn << " : " << nums[i] << " - " << nums[j] << "\n";
            }else{
                // cout<<"....\n";
            }
        }
        // ln; 
    }
    // ln;
    cout << coutn << endl;
    return 0;
}