#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 0; i <= n; i++) {
            cin >> a[i];
        }

        int ans = 2e9;

        for (int i = 0; i < n; i++) {
            int current_loudness = max(a[i], a[i + 1]);
            ans = min(ans, current_loudness);
        }

        cout << ans << endl;
    }

    return 0;
}
