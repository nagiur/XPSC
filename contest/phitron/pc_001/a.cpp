#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define clear ios::sync_with_stdio(0);cin.tie(0);

int main() {
    clear;

    int kase;
    cin >> kase;
    
    int n, d;
    while (kase--) {
        cin>>n;

        if(n >= 1900){
            d = 1;
        }else if(n >= 1600 && n <= 1899){
            d = 2;
        }else if(n >= 1400 && n <= 1599){
            d = 3;
        }else {
            d = 4;
        }

        cout<<"Division "<<d;
        cout<<endl;
    }


    return 0;
}