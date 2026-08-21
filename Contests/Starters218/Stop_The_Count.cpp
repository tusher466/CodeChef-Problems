#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;
    string s;
    cin >> s;

    int chef_votes = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            chef_votes++;
        }
        int total = i + 1;
        if (chef_votes > total - chef_votes) {
            ans++;
        }
    }

    cout << ans << "\n";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
