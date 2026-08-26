#include<bits/stdc++.h>
using namespace std;

    void solve() {
    int n;
    cin >> n;
    vector<int> p(n + 1), pos(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        pos[p[i]] = i;
    }

    queue<int> q;
    auto check = [&](int v) {
        if (v >= 1 && v <= n && p[v] != v) {
            if (abs(v - p[v]) >= abs(pos[v] - v)) {
                q.push(v);
            }
        }
    };

    for (int i = 1; i <= n; i++) {
        check(i);
    }

    vector<pair<int, int>> ans;
    while (!q.empty()) {
        int v = q.front();
        q.pop();

        if (p[v] == v) continue;
        if (abs(v - p[v]) < abs(pos[v] - v)) continue;

        int u = pos[v];
        ans.push_back({u, v});

        int val_u = p[u];
        int val_v = p[v];

        swap(p[u], p[v]);
        pos[val_u] = v;
        pos[val_v] = u;

        check(u);
        check(v);
        check(val_u);
        check(val_v);
    }

    cout << ans.size() << endl;
    for (auto& pair : ans) {
        cout << pair.first << " " << pair.second << endl;
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}