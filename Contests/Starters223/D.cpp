#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }

            vector<int> dp(n + 2, 0);
            int max_len = 0;

            for (int i = 0; i < n; i++) {
                int x = a[i];
                if (x == 1) {
                    dp[1] = max(dp[1], max_len + 1);
                    if (dp[1] > max_len) {
                        max_len = dp[1];
                    }
                } else {
                    int current_len = 1; 
                    if (dp[x - 1] > 0) {
                        current_len = max(current_len, dp[x - 1] + 1);
                    }
                    dp[x] = max(dp[x], current_len);
                    if (dp[x] > max_len) {
                        max_len = dp[x];
                    }
                }
            }

            cout << max_len << endl;
        }
    }
    return 0;
}
