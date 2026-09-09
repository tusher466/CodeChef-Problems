#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long X, Y;
        cin >> X >> Y;
        
        vector<long long> dp(1005, -1000000000000000000LL);
        dp[0] = 0;
        
        for (int day = 1; ; day++) {
            vector<long long> next_dp(1005, -1000000000000000000LL);
            
            for (long long k = 0; k < day; k++) {
                if (dp[k] == -1000000000000000000LL) continue;
                
                long long val1 = dp[k] + Y * k * k;
                if (val1 > next_dp[k]) {
                    next_dp[k] = val1;
                }
                
                if (k + 1 < 1005) {
                    long long val2 = dp[k] - X + Y * (k + 1) * (k + 1);
                    if (val2 > next_dp[k + 1]) {
                        next_dp[k + 1] = val2;
                    }
                }
            }
            
            dp = next_dp;
            
            bool found = false;
            for (int k = 1; k <= day; k++) {
                if (dp[k] > 0) {
                    found = true;
                    break;
                }
            }
            
            if (found) {
                cout << day << endl;
                break;
            }
        }
    }

    return 0;
}
