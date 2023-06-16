#include <bits/stdc++.h>

using namespace std;

class Solution {
   public:
    int search(string pat, string txt) {

        int  i = 0, j = 0, k = pat.size();
        int pat_fig[26] = {0};
        int fig[26] = {0};

        for (char ch : pat) {
            pat_fig[ch - 'a']++;
        }

        int ans = 0;
        while (j < txt.size()) {
            
            fig[txt[j] - 'a']++;

            if (j < k - 1) {
                j++;
            } else {
                bool flag = true;
                for (int v = 0; v < 26; v++) {
                    if (pat_fig[v] != fig[v]) {
                        flag = false;
                        break;
                    }
                }
                if (flag) ans++;
                fig[txt[i] - 'a']--;
                i++;
                j++;
            }
        }

        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
