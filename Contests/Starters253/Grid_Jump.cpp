#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    if (cin >> t) {
        while (t--) {
            int a, b;
            long long p, q, r;
            cin >> a >> b >> p >> q >> r;
            
            vector<vector<long long>> dp(a + 3, vector<long long>(b + 3, 1e18));
            dp[0][0] = 0;
            
            for (int i = 0; i <= a; ++i) {
                for (int j = 0; j <= b; ++j) {
                    if (dp[i][j] == 1e18) continue;
                    
                    dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + p);
                    dp[i + 2][j] = min(dp[i + 2][j], dp[i][j] + p);
                    
                    dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + q);
                    dp[i][j + 2] = min(dp[i][j + 2], dp[i][j] + q);
                    
                    dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + r);
                }
            }
            
            cout << dp[a][b] << endl;
        }
    }

    return 0;
}
