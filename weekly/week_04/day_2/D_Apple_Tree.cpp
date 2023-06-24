#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
vector<long long> cnt;

void dfs(int v, int p) {
    if (graph[v].size() == 1 && graph[v][0] == p) {
        cnt[v] = 1;
    } else {
        for (auto u : graph[v]) {
            if (u != p) {
                dfs(u, v);
                cnt[v] += cnt[u];
            }
        }
    }
}

void code() {
    int n, q;
    cin >> n;

    graph.assign(n, vector<int>());

    for (size_t i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cnt.assign(n, 0);
    dfs(0, -1);

    cin >> q;
    for (size_t i = 0; i < q; i++) {
        int c, k;
        cin >> c >> k;
        c--;
        k--;

        long long result = cnt[c] * cnt[k];
        cout << result << endl;
    }
}

int main() {
    int kase;
    cin >> kase;

    while (kase--) {
        code();
    }

    return 0;
}