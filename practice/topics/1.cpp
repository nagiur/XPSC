#include <bits/stdc++.h>

using namespace std;

// Problem: Find the Pair Whose sum is equal to x

#define watch(x) cerr << "Watch: " << (#x) << " is " << (x) << endl

int main() {

    int kase;
    cin >> kase;
    
    while (kase--) {
        int n, s;
        cin>>n>>s;

        vector<int> nums(n);
        for(int &num: nums){
            cin>>num;
            nums.push_back(num);
        }
        // sort(nums.begin(), nums.end());

        for(auto num: nums){
            // watch(num);
            cout<<num<<" ";
        }

        cout<<endl;



    }

    return 0;
}