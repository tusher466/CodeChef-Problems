#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        vector<long long> c(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> c[i];
        }

        vector<vector<long long>> dp(n + 2, vector<long long>(n + 2, 0));

        for (int len = 1; len <= n; len++) {
            for (int i = 1; i <= n - len + 1; i++) {
                int j = i + len - 1;
                long long min_cost = -1;

                for (int k = i; k <= j; k++) {
                    long long current_cost = dp[i][k - 1] + dp[k + 1][j] + a[k] * c[i];
                    if (min_cost == -1 || current_cost < min_cost) {
                        min_cost = current_cost;
                    }
                }
                dp[i][j] = min_cost;
            }
        }

        cout << dp[1][n] << endl;
    }

    return 0;
}
